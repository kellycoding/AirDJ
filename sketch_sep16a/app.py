import sqlite3
from flask import Flask
from werkzeug.exceptions import abort

@app.route('/')
def index():
    return render_template('index.html')