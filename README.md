# python_cpp
Exemple d'utilisation d'un composant en python
Utilise pybind11
apres git clone, faire:
```
cd python_cpp
git submodule init
git submodule update
```

Pour compiler

```
cd hello
make
```

Pour utiliser
```
python3
>>> import hello_component
>>> hello_component.greet()
'hello, world'
>>> hello_component.getVersion()
'1.0'
>>> 
```
Créer People
```
import hello_component
p = hello_component.People('Long','LE')
>>> print(p)
<hello_component.People object at 0x7f4943ab0a40>
>>> p.getFirstName()
'Long'
>>> p.getLastName()
'LE'
>>> p.setFirstName('Thanh Long')
>>> p.getFirstName()
'Thanh Long'
>>> exit()

```
