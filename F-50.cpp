// 4. Difference between Class Template and Function Template

/*
| Aspect        | Function Template                             | Class Template                                  |
| ------------- | --------------------------------------------- | ----------------------------------------------- |
| Usage         | For functions                                 | For classes                                     |
| Instantiation | Happens automatically when function is called | Must specify type explicitly (`ClassName<int>`) |
| Example       | `add<int>(3, 4)`                              | `Calculator<int> obj(3, 4)`                     |

*/