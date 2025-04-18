import base64

text = "wpjvJAM{jhlzhy_k3jy9wa3k_m0212758}"
sample_string = "GeeksForGeeks is the best"
text = text.encode("ascii")
n = 2
base64_string = ""
base64_bytes = ""
for i in range(n): 
    

    # print(f"Encoded string: {type(sample_string_bytes)}")

    base64_bytes = base64.b64encode(text)
    base64_string = base64_bytes.decode("ascii")

    print(f"Encoded string: {base64_string}")