from flask import Flask
from flask import request
from flask import render_template
from flask import redirect

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

        if myForm.username.data == "jikexueyuan" and myForm.password.data == "123456" and myForm.validate():
            return redirect("http://www.baidu.com")
        else:
            message = "Login Failed"
            return render_template('index.html', message=message, form=myForm)
    return render_template('index.html', form=myForm)
if __name__ == "__main__":
    app.run(port=8000)
