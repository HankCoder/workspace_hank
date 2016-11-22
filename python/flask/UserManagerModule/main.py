from flask import Flask
from flask import request
from flask import render_template
from flask import redirect
from db import *
from model import *

from wtforms import Form, TextField, PasswordField, validators
app=Flask(__name__)

class LoginForm(Form):
    username = TextField("username", [validators.Required()])
    password = PasswordField("password", [validators.Required()])

class PublistForm(Form):
    content = TextField("content", [validators.Required()])
    sender = TextField("sender", [validators.Required()])

@app.route("/user", methods=['GET', 'POST'])
def login():
    myForm = LoginForm(request.form)
    if request.method == 'POST':
        # username = request.form['username']
        # password = request.form['password']

        if isExisted(myForm.username.data, myForm.password.data):
            return redirect("http://www.baidu.com")
        else:
            message = "Login Failed"
            return render_template('index.html', message=message, form=myForm)
    return render_template('index.html', form=myForm)

@app.route("/register", methods=['GET', "POST"])
def register():
    myForm = LoginForm(request.form)
    if request.method == 'POST':
        addUser(myForm.username.data, myForm.password.data)
        return "Register Successfully"
    return render_template('index.html', form=myForm)

@app.route("/show", methods=['GET', 'POST'])
def show():
    myEntryForm = PublistForm(request.form)
    l = getAllEntry()
    if request.method == 'POST':
        e = Entry(myEntryForm.content.data, myEntryForm.sender.data)
        e.add()
        return render_template("show.html", entries=l, form=myEntryForm)
    return render_template("show.html", entries=l, form=myEntryForm)
if __name__ == "__main__":
    app.run(port=8000)
