# singleton_shared_lib

A proper Linux toolchain will give you the unsurpising result:
```
Singleton()
[94174823866848] 'unset' => 'before main'
[94174823866848] 'before main' => 'lib a'
[94174823866848] 'lib a' => 'lib b'
[94174823866848] 'lib b' => 'after main'
~Singleton()
```

A simple Windows setup will duplicate Singleton into each binary:
```
Singleton()
[140701732254544] 'unset' => 'before main'
Singleton()
[140732774888256] 'unset' => 'lib a'
Singleton()
[140732774757184] 'unset' => 'lib b'
[140701732254544] 'before main' => 'after main'
~Singleton()
~Singleton()
~Singleton()
```


#

_Licensed under the [MIT License](LICENSE)._
