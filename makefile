init:
    git init
    git remote add origin https://github.com/sebastianvalverdec/ejercicio-makefile/new/main

dir:
    mkdir src dist

clean:
    rm -f dist/*.out

build: clean
    

add:
    git add .

commit:
    git commit -m "Actualizar archivos del proyecto"

sync:
    git pull
    git push
