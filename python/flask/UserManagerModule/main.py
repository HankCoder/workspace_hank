from flask import Flask
from flask import request
from flask import render_template
from flask import redirect
from db import *

from wtforms import Form, TextField, PasswordField, validators
app=Flask(__name__)

class LoginForm(Form):
    username = TextField("username", [validators.Required()])
    password = PasswordField("password", [validators.Required()])

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
if __name__ == "__main__":
    app.run(port=8000)
