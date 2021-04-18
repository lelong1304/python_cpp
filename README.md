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

Exemple d'utilisation de Crypto
```
>>> cd crypto
>>> make
>>> python3
>>> import crypto_component
>>> c = crypto_component.Crypto()
>>> c.initialize("4b8e29b9b0dddd58a709edba7d6df6c07ebdaf5653e325114bc5318c238f87f0")
>>> c.getPrivateKey()
'4b8e29b9b0dddd58a709edba7d6df6c07ebdaf5653e325114bc5318c238f87f0'
>>> exit()
```
