# Given a list of cat images
cats = [
    { 'width': 127, 'height': 734, 'image' : 'cat1.png', 'breed' : 'himalayan'},
    { 'width': 534, 'height': 400, 'image' : 'cat2.png', 'breed' : 'domestic'},
    { 'width': 534, 'height': 400, 'image' : 'cat3.png', 'breed' : 'egyptian'},
]



# Compute total area of all cat images using a comprehension
total_area = sum ( [cat['width'] * cat['height'] for cat in cats] ) 

# Run your program using https://www.online-python.com/
print(total_area)