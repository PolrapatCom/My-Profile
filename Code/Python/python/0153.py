def xor_decrypt(encrypted_data, key):
    decrypted_data = ''.join(chr(ord(char) ^ key) for char in encrypted_data)
    return decrypted_data

# Example encrypted data (replace this with your actual data)
encrypted_data = """♣
x.-,%!#6
♣

↔◄↨☺☺◄◄
↑☺
♥►♥☺▬►x'4'.bwb  ,+%*6

♥►▬♥▬

♥►▬♥▬↔♥☺

¶x
►▬

◄↕
▬

x-00-!↔
►▬


♥►▬♥▬

♥►▬♥▬↔♥☺
¶x♥◄▬
◄↕
▬

x-00-!↔♥◄▬

♥►▬♥▬

♥►▬♥▬↔♥☺

↨▬◄

◄↕
▬

↨▬00-!↔◄


♥►▬♥▬

♥►▬♥▬↔♥☺
¶x§◄▬
◄↕
▬

x-00-!↔§◄▬

♥►▬♥▬

♥►▬♥▬↔♥☺

¶x
►▬

◄↕
▬

x-00-!↔
►▬

U♠
►☺▬↔◄♣x#66#!)'0x§*;b&-b20-%0#//'01b20'$'0b&#0)b/-&'}b'!#71'b.+%*6b#660#!61b 7%1c
4▬
☺▬▬pv9sr{tp$ vvsvrt'rz! 'q!!wutpvrzv&z?
♦↔♦♥♣"""  # This should be in string format

# XOR decrypt using the key
key = 66
decrypted_message = xor_decrypt(encrypted_data, key)
print(decrypted_message)
