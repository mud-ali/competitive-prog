import os

name = input("name? ").strip()
fs_safe = name.lower().replace(' ','-')
lang = input("language? choose c (for c++), java, or python ")
link = input("Problem URI: ")
os.system(f"mkdir {fs_safe}")

if lang == 'c':
    os.system(f"cp ./.templates/main.cpp {fs_safe}/main.cpp")
elif lang == 'java':
    os.system(f"cp ./.templates/Main.java {fs_safe}/Main.java")
elif lang == "py" or lang == "python":
    os.system(f"touch {name}/main.py")

readme_template = f"""
# {name}

## Problem

[{link}]({link})
"""

with open(f"{fs_safe}/README.md",'w') as readme:
    readme.write(readme_template)

ignore_template = f"""
*
!*.*
.gitignore
"""

with open(f"{fs_safe}/.gitignore",'w') as ignore:
    ignore.write(ignore_template)