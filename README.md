# singleton_shared_lib

A proper linux toolchain will give you the unsurpising result:
```
Singleton()
[94174823866848] 'unset' => 'before main'
[94174823866848] 'before main' => 'lib a'
[94174823866848] 'lib a' => 'lib b'
[94174823866848] 'lib b' => 'after main'
~Singleton()
```


#

_Licensed under the [MIT License](LICENSE)._
