from flask import Flask
from flask import render_template
from flask import request
from flask import url_for
from flask import redirect
app = Flask(__name__)

@app.route('/', methods=['POST', 'GET'])
def index():
	return redirect(url_for('add'))
@app.route('/add', methods=['POST', 'GET'])
def add():
	if request.method == 'POST':
		a = request.form['adder1']
		b = request.form['adder2']
		a = int(a)
		b = int(b)
		c = a + b
		return render_template('index.html', message=str(c))
	return render_template('index.html')

if __name__ == "__main__":
	app.run(port=8080)
