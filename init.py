import os

name = input("name? ").strip().replace(' ','-')
lang = input("language? choose c (for c++), java, or python ")
link = input("Problem URI: ")
os.system(f"mkdir {name}")

if lang == 'c':
    os.system(f"cp ./.templates/main.cpp {name}/main.cpp")
elif lang == 'java':
    os.system(f"cp ./.templates/Main.java {name}/Main.java")
elif lang == "py" or lang == "python":
    os.system(f"touch {name}/main.py")

readme_template = f"""
# {name}

## Problem

[{link}]({link})
"""

with open(f"{name}/README.md",'w') as readme:
    readme.write(readme_template)