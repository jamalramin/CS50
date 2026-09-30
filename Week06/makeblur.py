from PIL import Image, ImageFilter

not_Edited = Image.open("nature.jpg")

# this line makes the picture blury 
# edited = not_Edited.filter(ImageFilter.BoxBlur(15))

# this is another kind of the filter in pillow library
# edited = not_Edited.filter(ImageFilter.FIND_EDGES())

edited.save("editedImage.jpg")