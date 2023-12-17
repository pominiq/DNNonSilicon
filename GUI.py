# sudo apt-get install python3-tk

import os
import sys
if sys.version_info[0] == 3:
    import tkinter as tk
else:
    import Tkinter as tk

import customtkinter

customtkinter.set_appearance_mode("System")
customtkinter.set_default_color_theme("blue")

# App frame
app = customtkinter.CTk()
app.geometry("720x900")
app.title("Model to layout flow")

# UI elements
title = customtkinter.CTkLabel(app, text="Specify path with TensorFlow .json-file and .weights.h5-file")
title.pack(padx=1, pady=1)

modelpath_var = tk.StringVar()
modelpath = customtkinter.CTkEntry(app, width=350, height=40, textvariable=modelpath_var)
modelpath.pack()



app.mainloop()