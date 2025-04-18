!pip install reportlab

from reportlab.lib.pagesizes import A4
from reportlab.pdfgen import canvas
import random
import os

def generate_math_problems(num_problems):
    problems = []
    operations = ['+', '-', 'x', '/']
    for _ in range(num_problems):
        num1 = random.randint(1, 20)
        num2 = random.randint(1, 20)
        op = random.choice(operations)

        if op == '/':
            num1 = num1 * num2

        problem = f"{num1} {op} {num2} = "
        if op == '+':
            answer = num1 + num2
        elif op == '-':
            answer = num1 - num2
        elif op == 'x':
            answer = num1 * num2
        elif op == '/':
            answer = num1 // num2

        problems.append((problem, answer))
    return problems

def save_to_pdf(problems, filename):
    c = canvas.Canvas(filename, pagesize=A4)
    width, height = A4
    y_position = height - 50
    c.setFont("Helvetica", 12)

    for i, (problem, answer) in enumerate(problems, start=1):
        question_text = f"{i}.) {problem}"
        answer_label = "Answer:"
        answer_text = f"{answer}"

        question_width = c.stringWidth(question_text, "Helvetica", 12)
        answer_label_width = c.stringWidth(answer_label, "Helvetica", 12)
        answer_width = c.stringWidth(answer_text, "Helvetica", 12)

        c.drawString(50, y_position, question_text)
        total_width = answer_label_width + answer_width + 10
        c.drawString(width - 50 - total_width, y_position, answer_label)
        c.drawString(width - 50 - answer_width, y_position, answer_text)

        y_position -= 30

        if y_position < 50 and i < len(problems):
            c.showPage()
            c.setFont("Helvetica", 12)
            y_position = height - 50

    c.save()

# Generate and save PDFs
num_problems = 2025
k = 10
pdf_files = []
for i in range(10):
    problems = generate_math_problems(num_problems)
    filename = f"/content/PDF_Math_Generator_{str(i+1+k).zfill(3)}.pdf"
    save_to_pdf(problems, filename)
    pdf_files.append(filename)
    print(f"PDF Created: {filename}")

# Zip all PDF files into one archive
!zip /content/math_files.zip /content/PDF_Math_Generator_*.pdf

# Download the zip file
from google.colab import files
files.download('/content/math_files.zip')
