# DesignPatterns

![SummaryOfDesignPatterns](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\SummaryOfDesignPatterns.jpg)



| 范围      | 创建型                                      | 结构型                              | 行为型                                      |
| ------- | ---------------------------------------- | -------------------------------- | ---------------------------------------- |
| 对象创建    | Factory Method（工厂方法）Abstract Factory（抽象工厂）Singleton（单例）Prototype（原型）Builder（建造者） |                                  |                                          |
| 接口适配    |                                          | Adapter（适配器）Bridge（桥接）Façade（外观） |                                          |
| 对象去耦    |                                          |                                  | Mediator（中介者）Observer（观察者）               |
| 抽象集合    |                                          | Composite（组合）                    | Iterator（迭代器）                            |
| 行为扩展    |                                          | Decorator（装饰）                    | Visitor（访问者）Chain of Responsibility（职责链） |
| 算法封装    |                                          |                                  | Template Method（模板方法）Strategy（策略）Command |
| 性能与对象访问 |                                          | Flyweight（享元）Proxy（代理）           |                                          |
| 对象状态    |                                          |                                  | Memento（备忘录）State（状态）                    |
| 其它      |                                          |                                  | Interpreter（解释器）                         |

## 工厂方法模式(Factory Methord)

**定义**

工厂方法模式又称为工厂模式，也叫虚拟构造器（Virtual Constructor）模式或者多态工厂模式（Polymorphic Factory），在工厂方法模式中，父类负责定义创建对象的公共接口，而子类则负责生成具体的对象，这样做的目的是将类的实例化操作延迟到子类中完成，即由子类来决定究竟应该实例化（创建）哪一个类。

工厂方式法模式（Factory Method），定义了一个用于创建对象的接口，让子类决定实例化哪一个类。工厂方法使一个类的实例化延迟到子类。

**意图**

定义一个用户创建对象的接口，让子类决定实例化哪一个类，工厂方法模式使一个类的实例化延迟到其子类。

**参与者**

抽象产品角色（IProduct）：定义产品的接口
具体产品角色（ConcreteProduct） ：实现接口Product的具体产品类
抽象工厂角色（Factory） ：声明工厂方法（CreateProduct），返回产品的接口
真实的工厂（ConcreteFactory）：实现CreateProduct工厂方法，由客户调用，返回一个产品的实例

**类图**

![FactoryMethodPattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\FactoryMethodPattern.PNG)

**工厂方法模式的优点**
在工厂方法模式中，工厂方法用来创建客户所需要的产品，同时还向客户隐藏了哪种具体产品类将被实例化这一细节，用户只需要关心所需产品对应的工厂，无须关心创建细节，甚至无须知道具体产品类的类名。

基于工厂角色和产品角色的多态性设计是工厂方法模式的关键。它能够使工厂可以自主确定创建何种产品对象，而如何创建这个对象的细节则完全封装在具体工厂内部。工厂方法模式之所以又被称为多态工厂模式，是因为所有的具体工厂类都具有同一抽象父类。

使用工厂方法模式的另一个优点是在系统中加入新产品时，无须修改抽象工厂和抽象产品提供的接口，无须修改客户端，也无须修改其他的具体工厂和具体产品，而只要添加一个具体工厂和具体产品就可以了。这样，系统的可扩展性也就变得非常好，完全符合“开闭原则”。

**工厂方法模式的缺点**
在添加新产品时，需要编写新的具体产品类，而且还要提供与之对应的具体工厂类，系统中类的个数将成对增加，在一定程度上增加了系统的复杂度，有更多的类需要编译和运行，会给系统带来一些额外的开销。

由于考虑到系统的可扩展性，需要引入抽象层，在客户端代码中均使用抽象层进行定义，增加了系统的抽象性和理解难度，且在实现时可能需要用到DOM、反射等技术，增加了系统的实现难度。

**模式适用环境**
在以下情况下可以使用工厂方法模式：

一个类不知道它所需要的对象的类：在工厂方法模式中，客户端不需要知道具体产品类的类名，只需要知道所对应的工厂即可，具体的产品对象由具体工厂类创建；客户端需要知道创建具体产品的工厂类。

一个类通过其子类来指定创建哪个对象：在工厂方法模式中，对于抽象工厂类只需要提供一个创建产品的接口，而由其子类来确定具体要创建的对象，利用面向对象的多态性和里氏代换原则，在程序运行时，子类对象将覆盖父类对象，从而使得系统更容易扩展。

将创建对象的任务委托给多个工厂子类中的某一个，客户端在使用时可以无须关心是哪一个工厂子类创建产品子类，需要时再动态指定，可将具体工厂类的类名存储在配置文件或数据库中。

**小结**
工厂方法模式又称为工厂模式，它属于类创建型模式。在工厂方法模式中，工厂父类负责定义创建产品对象的公共接口，而工厂子类则负责生成具体的产品对象，这样做的目的是将产品类的实例化操作延迟到工厂子类中完成，即通过工厂子类来确定究竟应该实例化哪一个具体产品类。
工厂方法模式包含四个角色：抽象产品是定义产品的接口，是工厂方法模式所创建对象的超类型，即产品对象的共同父类或接口；具体产品实现了抽象产品接口，某种类型的具体产品由专门的具体工厂创建，它们之间往往一一对应；抽象工厂中声明了工厂方法，用于返回一个产品，它是工厂方法模式的核心，任何在模式中创建对象的工厂类都必须实现该接口；具体工厂是抽象工厂类的子类，实现了抽象工厂中定义的工厂方法，并可由客户调用，返回一个具体产品类的实例。 
工厂方法模式是简单工厂模式的进一步抽象和推广。由于使用了面向对象的多态性，工厂方法模式保持了简单工厂模式的优点，而且克服了它的缺点。在工厂方法模式中，核心的工厂类不再负责所有产品的创建，而是将具体创建工作交给子类去做。这个核心类仅仅负责给出具体工厂必须实现的接口，而不负责产品类被实例化这种细节，这使得工厂方法模式可以允许系统在不修改工厂角色的情况下引进新产品。 
工厂方法模式的主要优点是增加新的产品类时无须修改现有系统，并封装了产品对象的创建细节，系统具有良好的灵活性和可扩展性；其缺点在于增加新产品的同时需要增加新的工厂，导致系统类的个数成对增加，在一定程度上增加了系统的复杂性。 
工厂方法模式适用情况包括：一个类不知道它所需要的对象的类；一个类通过其子类来指定创建哪个对象；将创建对象的任务委托给多个工厂子类中的某一个，客户端在使用时可以无须关心是哪一个工厂子类创建产品子类，需要时再动态指定。

## 抽象工厂模式(Abstract Factory)

**定义**

为创建一组相关或相互依赖的对象提供一个接口，而且无需指定他们的具体类。

**动机**

在工厂方法模式中具体工厂负责生产具体的产品，每一个具体工厂对应一种具体产品，工厂方法也具有唯一性，一般情况下，一个具体工厂中只有一个工厂方法或者一组重载的工厂方法。但是有时候我们需要一个工厂可以提供多个产品对象，而不是单一的产品对象。

为了更清晰地理解工厂方法模式，需要先引入两个概念：
**产品等级结构**：产品等级结构即产品的继承结构，如一个抽象类是显示器，其子类LG显示器、三星显示器等，则抽象显示器与具体品牌的显示器之间构成了一个产品等级结构，抽象显示器是父类，而具体品牌的显示器是其子类。
**产品族**：在抽象工厂模式中，产品族是指由同一个工厂生产的，位于不同产品等级结构中的一组产品，如LG工厂生产的LG显示器、LG主机，LG显示器位于显示器产品等级结构中，LG主机位于主机等级结构中。LG的显示器加主机就构成了一台纯LG电脑。当然，按照工厂不同，也可以进行混搭。
产品族与产品等级结构示意图

**参与者**

抽象产品角色（IProduct）：定义产品的接口
具体产品角色（ConcreteProduct） ：实现接口Product的具体产品类
抽象工厂角色（Factory） ：声明工厂方法（CreateProduct），返回一族产品的接口
真实的工厂（ConcreteFactory）：实现CreateProduct工厂方法，由客户调用，返回一族产品的实例

**类图**

![AbstractFactoryPattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\AbstractFactoryPattern.PNG)

**抽象工厂模式的优点**
抽象工厂模式隔离了具体类的生成，使得客户并不需要知道什么被创建。由于这种隔离，更换一个具体工厂就变得相对容易。所有的具体工厂都实现了抽象工厂中定义的那些公共接口，因此只需改变具体工厂的实例，就可以在某种程度上改变整个软件系统的行为。另外，应用抽象工厂模式可以实现高内聚低耦合的设计目的，因此抽象工厂模式得到了广泛的应用。
当一个产品族中的多个对象被设计成一起工作时，它能够保证客户端始终只使用同一个产品族中的对象。这对一些需要根据当前环境来决定其行为的软件系统来说，是一种非常实用的设计模式。
增加新的具体工厂和产品族很方便，无须修改已有系统，符合“开闭原则”。

**抽象工厂模式的缺点**
在添加新的产品对象时，难以扩展抽象工厂来生产新种类的产品，这是因为在抽象工厂角色中规定了所有可能被创建的产品集合，要支持新种类的产品就意味着要对该接口进行扩展，而这将涉及到对抽象工厂角色及其所有子类的修改，显然会带来较大的不便。
开闭原则的倾斜性（增加新的工厂和产品族容易，增加新的产品等级结构麻烦）

**模式适用环境**
**在以下情况下可以使用抽象工厂模式：**
一个系统不应当依赖于产品类实例如何被创建、组合和表达的细节，这对于所有类型的工厂模式都是重要的。 
系统中有多于一个的产品族，而每次只使用其中某一产品族。
属于同一个产品族的产品将在一起使用，这一约束必须在系统的设计中体现出来。
系统提供一个产品类的库，所有的产品以同样的接口出现，从而使客户端不依赖于具体实现。

**小结**

无论是简单工厂模式，工厂方法模式，还是抽象工厂模式，他们都属于工厂模式，在形式和特点上也是极为相似的，他们的最终目的都是为了解耦。在使用时，我们不必去在意这个模式到底工厂方法模式还是抽象工厂模式，因为他们之间的演变常常是令人琢磨不透的。经常你会发现，明明使用的工厂方法模式，当新需求来临，稍加修改，加入了一个新方法后，由于类中的产品构成了不同等级结构中的产品族，它就变成抽象工厂模式了；而对于抽象工厂模式，当减少一个方法使的提供的产品不再构成产品族之后，它就演变成了工厂方法模式。

 所以，在使用工厂模式时，只需要关心降低耦合度的目的是否达到了。

## 单例模式

**定义**

数学与逻辑学中，singleton定义为“有且仅有一个元素的集合”。

单例模式最初的定义出现于《设计模式》（艾迪生维斯理, 1994）：“保证一个类仅有一个实例，并提供一个访问它的全局访问点。”

Java中单例模式定义：“一个类有且仅有一个实例，并且自行实例化向整个系统提供。”

**动机**

对于系统中的某些类来说，只有一个实例很重要，例如，一个系统中可以存在多个打印任务，但是只能有一个正在工作的任务；一个系统只能有一个窗口管理器或文件系统；一个系统只能有一个计时工具或ID(序号)生成器。如在Windows中就只能打开一个任务管理器。如果不使用机制对窗口对象进行唯一化，将弹出多个窗口，如果这些窗口显示的内容完全一致，则是重复对象，浪费内存资源；如果这些窗口显示的内容不一致，则意味着在某一瞬间系统有多个状态，与实际不符，也会给用户带来误解，不知道哪一个才是真实的状态。因此有时确保系统中某个对象的唯一性即一个类只能有一个实例非常重要。[3][ ]() 

如何保证一个类只有一个实例并且这个实例易于被访问呢？定义一个全局变量可以确保对象随时都可以被访问，但不能防止我们实例化多个对象。一个更好的解决办法是让类自身负责保存它的唯一实例。这个类可以保证没有其他实例被创建，并且它可以提供一个访问该实例的方法。这就是单例模式的模式动机。

**实现方式**

懒汉与饿汉

单例大约有两种实现方法：懒汉与饿汉。
懒汉：故名思义，不到万不得已就不会去实例化类，也就是说在第一次用到类实例的时候才会去实例化，所以上边的经典方法被归为懒汉实现；
饿汉：饿了肯定要饥不择食。所以在单例类定义的时候就进行实例化。
特点与选择：
由于要进行线程同步，所以在访问量比较大，或者可能访问的线程比较多时，采用饿汉实现，可以实现更好的性能。这是以空间换时间。
在访问量较小时，采用懒汉实现。这是以时间换空间。

> 懒汉由于是在使用的时候才进行实例化，这就需要考虑并发时的线程安全。而饿汉则不用

对比：

代码中有三种实现方式

经典懒汉：使用时创建实例，可以进行实例销毁

静态成员懒汉：使用时创建实例，不能进行实例销毁

饿汉：类定义是创建实例，可以进行实例销毁

**优点**

一、实例控制
单例模式会阻止其他对象实例化其自己的单例对象的副本，从而确保所有对象都访问唯一实例。
二、灵活性
因为类控制了实例化过程，所以类可以灵活更改实例化过程。

**缺点**

一、开销
虽然数量很少，但如果每次对象请求引用时都要检查是否存在类的实例，将仍然需要一些开销。可以通过使用静态初始化解决此问题。
二、可能的开发混淆
使用单例对象（尤其在类库中定义的对象）时，开发人员必须记住自己不能使用new关键字实例化对象。因为可能无法访问库源代码，因此应用程序开发人员可能会意外发现自己无法直接实例化此类。
三、对象生存期
不能解决删除单个对象的问题。在提供内存管理的语言中（例如基于.NET Framework的语言），只有单例类能够导致实例被取消分配，因为它包含对该实例的私有引用。在某些语言中（如 C++），其他类可以删除对象实例，但这样会导致单例类中出现悬浮引用。

**模式扩展**

在实际项目中，一个模式不会像我们这里的代码那样简单，只有在熟练了各种设计模式的特点，才能更好的在实际项目中进行运用。单例模式和工厂模式在实际项目中经常见到，两种模式的组合，在项目中也是很常见的。所以，有必要总结一下两种模式的结合使用。

一种产品，在一个工厂中进行生产，这是一个工厂模式的描述；而只需要一个工厂，就可以生产一种产品，这是一个单例模式的描述。所以，在实际中，一种产品，我们只需要一个工厂，此时，就需要工厂模式和单例模式的结合设计。由于单例模式提供对外一个全局的访问点，所以，我们就需要使用[简单工厂模式](http://www.jellythink.com/archives/42)中那样的方法，定义一个标识，用来标识要创建的是哪一个单件。由于模拟代码较多，[原作者](http://www.jellythink.com/archives/82)提供了[工程下载链接](http://pan.baidu.com/s/1kTnNXo7)。

## 建造者模式

**定义**

在GOF的《设计模式 可复用面向对象软件的基础》中是这样说的：将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示。

**动机**

一个复杂对象的创建，其通常是由很多的子对象构成；如果一个对象能够直接就创建好了，那么也不会称之为复杂对象。由于项目中需求的变化，这个复杂对象的各个部分经常会发生剧烈的变化，但是，不管怎么变化，将它们组合在一起，组成一个复杂的对象的事实是不会变的。建造者模式就提供了一种“封装机制”来将各个对象的变化隔离开，最终，组合成复杂对象的过程是不会变的。

**参与者**

Product产品类，通过模板方法模式实现，有基本方法和模板方法
Builder抽象建造者，规范产品的组件，一般由子类实现
ConcreteBuilder具体建造者，实现抽象类定义的所有方法，并返回一个创建好的对象
Director导演类，负责安排已有模块的顺序，然后告诉建造者开始建造

**类图**

![BuilderPattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\BuilderPattern.PNG)

**优点**

封装性
建造者独立，容易扩展--》就是这个所谓不同的顺序的具体描述了
便于控制细节风险，细节问题封装在建造者中，所以互不影响
**使用场景**

相同方法，不同顺序
多个部件可以组装，但是产生的结果不同时
产品类非常复杂或者调用顺序不同，产生的功能不同
对象创建过程中会使用到的系统中的其他对象时，这些对象在产品对象的创建过程不易得到时，可以采用建造者模式疯长该对象的创建过程。这是一个补偿方法。

**小结**

一个复杂对象是由多个部件组成的，建造者模式是把复杂对象中各部件的创建和组装分开，分别用Builder类和Director类来表示。用Director构建最后的复杂对象，而在上面Builder接口中封装的是如何创建一个个部件（复杂对象是由这些部件组成的），也就是说，Director负责如何将部件最后组装成产品。这样建造者模式就让设计和实现解耦了。

刚开始接触建造者模式的时候，最容易把建造者和抽象工厂模式混淆了。由于而这都属于创建型的设计模式，所以二者之间是有公共点的，但是建造者模式注重于对象组合，即不同的小对象组成一个整体的复杂大对象，而抽象工厂模式针对于接口编程，只是对外提供创建对象的工厂接口，不负责对象之后的处理。

## 原型模式

摘自：[C++设计模式——原型模式](http://www.jellythink.com/archives/105)

**什么是原型模式？**

在GOF的《设计模式：可复用面向对象软件的基础》中是这样说的：用原型实例指定创建对象的种类，并且通过拷贝这些原型创建新的对象。在这个定义中，最重要的一个词是“拷贝”，也就是口头上的复制，而这个拷贝，也就是原型模式的精髓所在。

举一个最简单的例子来说明原型模式：记得上小学的时候，老师把需要做的课外习题写到黑板上，而下面的我们都要把这些题抄写到自己的本子上，回家做好，第二天交上来，也就是每道题，全班50个人，每个人都要抄写一遍。按照现在的时间理论来说，就是浪费了50个人的时间。但是，那个时候条件限制，老师也是不得已而为之。现在好了，老师做一份电子版的习题，打印一份，然后拿着这份打印的原版，就可以复制出50份。

结合原型模式的概念进行分析，老师打印出来的那一份，就是“原型”，而复制出来的那50份，就是使用的“拷贝”。而原型模式就是这么简单的一个道理，通过现有的东西，再复制出一个来。

**为什么要使用原型模式？**

原型模式和建造者模式、工厂方法模式一样，都属于创建型模式的一种。简单的来说，我们使用原型模式，就是为了创建对象。但是，在以下场景下，使用原型模式是最好的选择：

1. 当我们的对象类型不是开始就能确定的，而这个类型是在运行期确定的话，那么我们通过这个类型的对象克隆出一个新的对象比较容易一些；
2. 有的时候，我们需要一个对象在某个状态下的副本，此时，我们使用原型模式是最好的选择；例如：一个对象，经过一段处理之后，其内部的状态发生了变化；这个时候，我们需要一个这个状态的副本，如果直接new一个新的对象的话，但是它的状态是不对的，此时，可以使用原型模式，将原来的对象拷贝一个出来，这个对象就和之前的对象是完全一致的了；
3. 当我们处理一些比较简单的对象时，并且对象之间的区别很小，可能就几个属性不同而已，那么就可以使用原型模式来完成，省去了创建对象时的麻烦了；
4. 有的时候，创建对象时，构造函数的参数很多，而自己又不完全的知道每个参数的意义，就可以使用原型模式来创建一个新的对象，不必去理会创建的过程，让创建过程见鬼去吧。

所以，在上述的的情况下，在设计的时候，适当的考虑一下原型模式，减少对应的工作量，减少程序的复杂度，提高效率。

**类图**

![PrototypePattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\PrototypePattern.PNG)

由于克隆需要一个原型，而上面的类图中Prototype就这个原型，Prototype定义了克隆自身的Clone接口，由派生类进行实现，而实现原型模式的重点就在于这个Clone接口的实现。ConcretePrototype1类和ConcretePrototype2类继承自Prototype类，并实现Clone接口，实现克隆自身的操作；同时，在ConcretePrototype1类和ConcretePrototype2类中需要重写默认的复制构造函数，供Clone函数调用，Clone就是通过在内部调用重写的复制构造函数实现的。在后续的编码过程中，如果某个类需要实现Clone功能，就只需要继承Prototype类，然后重写自己的默认复制构造函数就好了。好比在C#中就提供了ICloneable接口，当某个类需要实现原型模式时，只需要实现这个接口的道理是一样的。

**实用性**

​               1.当要实例化的类是在运行时刻指定时。

　　　　2.为了避免创建一个与产品类层次平行的工厂类层次时。

　　　　3.当一个类的实例只能有几个不同状态组合中的一种时。

**效果**  

​               1.可以在运行时刻增加产品。

　　　　2.改变值以指定新对象。

　　　　3.改变结构以指定新对象。

　　　　4.减少子类的构造。

　　　　5.用类动态配置应用。

**与其它创建型模式的比较**

工厂方法模式、抽象工厂模式、建造者模式和原型模式都是创建型模式。工厂方法模式适用于生产较复杂，一个工厂生产单一的一种产品的时候；抽象工厂模式适用于一个工厂生产多个相互依赖的产品；建造者模式着重于复杂对象的一步一步创建，组装产品的过程，并在创建的过程中，可以控制每一个简单对象的创建；原型模式则更强调的是从自身复制自己，创建要给和自己一模一样的对象。

**小结**

原型模式作为创建型模式中最特殊的一个模式，具体的创建过程，是由对象本身提供，这样我们在很多的场景下可以很方便的快速的构建新的对象。但是，原型模式的最大缺点是继承原型的子类都要实现Clone操作，这个是很困难的。例如，当所考虑的类已经存在时就难以新增Clone操作。当内部包括一些不支持拷贝或者有循环引用的对象时，实现克隆可能也会很困难。说以说，每一种设计模式都有它的优点和缺点，在设计的时候，我们需要进行权衡各方面的因素，扬长避短。

## 观察者模式

**定义**

观察者模式（又被称为发布-订阅（Publish/Subscribe）模式，属于行为型模式的一种，它定义了一种一对多的依赖关系，让多个观察者对象同时监听某一个主题对象。这个主题对象在状态变化时，会通知所有的观察者对象，使他们能够自动更新自己。

**动机**

观察者模式可以实现消息的广播，一个消息可以同步触发多个事件，这是观察者模式非常重要的功能。它可以说是应用最多、影响最广的模式之一，因为 Observer 的一个实例 Model/View/Control（ MVC） 结构，在系统开发架构设计中有着很重要的地位和意义， MVC实现了 **业务逻辑和表示层的解耦** 。在 MFC 中， Doc/View（文档视图结构）提供了实现 MVC 的框架结构。在 Java 阵容中， Struts 则提供和 MFC 中 Doc/View 结构类似的实现 MVC 的框架。另外 Java 语言本身就提供了 Observer 模式的实现接口。当然， MVC 只是 Observer 模式的一个实例。

**参与者**

ISubject（目标接口）
——目标知道它的观察者。可以有任意多个观察者观察同一个目标；
——提供注册和删除观察者对象的接口。

IObserver（观察者接口）
——为那些在目标发生改变时需获得通知的对象定义一个更新接口。

Subject（具体目标）
——将有关状态存入各Observer对象；
——当它的状态发生改变时，向它的各个观察者发出通知。

 ConcreteObserver（具体观察者）
——维护一个指向ConcreteSubject对象的引用；
——存储有关状态，这些状态应与目标的状态保持一致；
——实现Observer的更新接口以使自身状态与目标的状态保持一致。

**类图**

![ObserverPattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\ObserverPattern.PNG)

Subject中会存储所有正在观察它的观察者，并提供附着和去附着观察者的操作。当有状态更新时，会调用notify方法。该方法会遍历附着在目标上的观察者，并调用观察者的update方法用以更新目标在观察者中的状态。

**优点**

第一、观察者模式在被观察者和观察者之间建立一个抽象的耦合。被观察者角色所知道的只是一个具体观察者列表，每一个具体观察者都符合一个抽象观察者的接口。被观察者并不认识任何一个具体观察者，它只知道它们都有一个共同的接口。
由于被观察者和观察者没有紧密地耦合在一起，因此它们可以属于不同的抽象化层次。如果被观察者和观察者都被扔到一起，那么这个对象必然跨越抽象化和具体化层次。
第二、观察者模式支持广播通讯。被观察者会向所有的登记过的观察者发出通知，
**缺点**

第一、如果一个被观察者对象有很多的直接和间接的观察者的话，将所有的观察者都通知到会花费很多时间。
第二、如果在被观察者之间有循环依赖的话，被观察者会触发它们之间进行循环调用，导致系统崩溃。在使用观察者模式是要特别注意这一点。
第三、如果对观察者的通知是通过另外的线程进行异步投递的话，系统必须保证投递是以自恰的方式进行的。
第四、虽然观察者模式可以随时使观察者知道所观察的对象发生了变化，但是观察者模式没有相应的机制使观察者知道所观察的对象是怎么发生变化的。 

**使用场景**

1. 当一个抽象模型有两个方面，其中一个方面依赖于另一方面。将这二者封装在独立的对象中以使它们可以各自独立的改变和复用；
2. 当对一个对象的改变需要同时改变其它对象，而不知道具体有多少对象有待改变；
3. 当一个对象必须通知其它对象，而它又不能假定其它对象是谁；也就是说，你不希望这些对象是紧密耦合的。

## 访问者模式

**定义**

封装某些作用于某种数据结构中各元素的操作，它可以在不改变数据结构的前提下定义作用于这些元素的新的操作。

**动机**

将数据结构与数据操作分离。

**参与者**

IVisitor : 抽象访问者。声明可以访问哪些元素，具体到程序中就是Visit方法参数定义哪些对象可以被访问
Visitor : 具体访问者。他确定了访问到元素后的具体操作。
IElement : 抽象元素。声明哪一个类访问者访问，程序上通过accept方法中的参数定义
Element : 具体元素。实现accept方法，visitor.visit(this)基本形成一种模式
ObjectStrture : 结构对象。元素的一种集合，一般容纳多个元素，不同接口的容器，如list，set，map，在项目中一般很少抽象这个角色

![Visitor](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\Visitor.PNG)

ObjectStrture 中的accept方法会遍历成员变量中每一个Element，并将具体的Visitor作为入参，调用Element的accept方法。而这个accept方法又会调用Visiter的visitor方法，对该元素进行具体的操作。

**优点**

1，访问者模式使得增加新的操作变得很容易。如果一些操作依赖于一个复杂的结构对象的话，那么一般而言，增加新的操作会很复杂。而使用访问者模式，增加新的操作就意味着增加一个新的访问者类，因此，变得很容易。
2，访问者模式将有关的行为集中到一个访问者对象中，而不是分散到一个个的节点类中。
3，访问者模式可以跨过几个类的等级结构访问属于不同的等级结构的成员类。迭代子只能访问属于同一个类型等级结构的成员对象，而不能访问属于不同等级结构的对象。访问者模式可以做到这一点。
4，积累状态。每一个单独的访问者对象都集中了相关的行为，从而也就可以在访问的过程中将执行操作的状态积累在自己内部，而不是分散到很多的节点对象中。这是有益于系统维护的优点。
**缺点**

1，增加新的节点类变得很困难。每增加一个新的节点都意味着要在抽象访问者角色中增加一个新的抽象操作，并在每一个具体访问者类中增加相应的具体操作。
2，破坏封装。访问者模式要求访问者对象访问并调用每一个节点对象的操作，这隐含了一个对所有节点对象的要求：它们必须暴露一些自己的操作和内部状态。不然，访问者的访问就变得没有意义。由于访问者对象自己会积累访问操作所需的状态，从而使这些状态不再存储在节点对象中，这也是破坏封装的。

**使用场景**

假如一个对象中存在着一些与本对象不相干（或者关系较弱）的操作，为了避免这些操作污染这个对象，则可以使用访问者模式来把这些操作封装到访问者中去。
假如一组对象中，存在着相似的操作，为了避免出现大量重复的代码，也可以将这些重复的操作封装到访问者中去。

**小结**

正如《设计模式》的作者GoF对访问者模式的描述：大多数情况下，你并需要使用访问者模式，但是当你一旦需要使用它时，那你就是真的需要它了。当然这只是针对真正的大牛而言。在现实情况下（至少是我所处的环境当中），很多人往往沉迷于设计模式，他们使用一种设计模式时，从来不去认真考虑所使用的模式是否适合这种场景，而往往只是想展示一下自己对面向对象设计的驾驭能力。编程时有这种心理，往往会发生滥用设计模式的情况。所以，在学习设计模式时，一定要理解模式的适用性。必须做到使用一种模式是因为了解它的优点，不使用一种模式是因为了解它的弊端；而不是使用一种模式是因为不了解它的弊端，不使用一种模式是因为不了解它的优点。

## 中介者模式

**定义**

用一个中介者对象封装一系列的对象交互，中介者使各对象不需要显示地相互作用，从而使耦合松散，而且可以独立地改变它们之间的交互。

**动机**

先了解同事类的概念：如果一个对象会影响其他的对象，同时也会被其他对象影响，那么这两个对象称为同事类。

 一般来说，同事类之间的关系是比较复杂的，多个同事类之间互相关联时，他们之间的关系会呈现为复杂的网状结构，这是一种过度耦合的架构，即不利于类的复用，也不稳定。例如在下图中，有六个同事类对象，假如对象1发生变化，那么将会有4个对象受到影响。如果对象3发生变化，那么将会有3个对象受到影响。也就是说，同事类之间直接关联的设计是不好的。

![net-like](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\MediatorPattern\net-like.jpg)

如果引入中介者模式，那么同事类之间的关系将变为星型结构，从图中可以看到，任何一个类的变动，只会影响的类本身，以及中介者，这样就减小了系统的耦合。一个好的设计，必定不会把所有的对象关系处理逻辑封装在本类中，而是使用一个专门的类来管理那些不属于自己的行为。

![star-like](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\MediatorPattern\star-like.jpg)

```cpp
#include <iostream>
using namespace std;

class AbstractColleague {
public:
	virtual int getNumber() {
		return number;
	}
	virtual void setNumber(int number) {
		this->number = number;
	}

	//抽象方法，修改数字时同时修改关联对象  
	virtual void changeNumber(int number, AbstractColleague* coll) {};
protected:
	int number;
};  
  
class ColleagueA : public AbstractColleague {
public:
	void changeNumber(int number, AbstractColleague* coll) {
		this->number = number;
		coll->setNumber(number * 100);
	}
};
  
class ColleagueB : public AbstractColleague {
public:
	void changeNumber(int number, AbstractColleague* coll) {
		this->number = number;
		coll->setNumber(number / 100);
	}
};
  
void main() {  
		AbstractColleague *collA = new ColleagueA();
		AbstractColleague *collB = new ColleagueB();

		cout << "==========设置A影响B==========" << endl;
		collA->changeNumber(1288, collB);
		cout << "collA的number值：" << collA->getNumber() << endl;
		cout << "collB的number值：" << collB->getNumber() << endl;

		cout << "==========设置B影响A==========" << endl;
		collB->changeNumber(87635, collA);
		cout << "collB的number值：" << collB->getNumber() << endl;
		cout << "collA的number值：" << collA->getNumber() << endl;
}  
```

上面的代码中，类A类B通过直接的关联发生关系，假如我们要使用中介者模式，类A类B之间则不可以直接关联，他们之间必须要通过一个中介者来达到关联的目的。

```cpp
#include <iostream>
using namespace std;

class AbstractColleague {
public:
	int getNumber() {
		return number;
	}
	void setNumber(int number) {
		this->number = number;
	}

	void changeNumber(int number, Mediator* med) {
		this->number = number;
		med->affect(number, this);  //通过调用中介者的affect方法来对其他的同事产生影响
	}
protected:
	int number;
};

//同事A
class ColleagueA : public AbstractColleague {};

//同事B
class ColleagueB : public AbstractColleague {};

class Mediator {
public:
	Mediator(ColleagueA* collA, ColleagueB* collB) : collA(collA), collB(collB) {}
	void affect(int number, AbstractColleague* coll) {//中介者通过入参类型来判断具体的影响
		if (coll == collA) {
			collB->setNumber(number * 100);
		}
		if (coll == collB) {
			collA->setNumber(number / 100);
		}
	};
private:
	ColleagueA* collA;
	ColleagueB* collB;
};
```

**类图**

![Mediator](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\MediatorPattern\Mediator.PNG)

同事类在做某些改变时会调用中介者的affect方法，通过该方法来影响其他的同事类。而中介者则要判断是哪一个类发生了变化，从而对波及类进行操作。

**参与者**

Mediator：中介者接口。在里面定义了各个同事之间相互交互所需要的方法，可以是公共的方法，如Change方法，也可以是小范围的交互方法。**接口是用来隔离的，如果只有一个中介者对象，预期中也没打算扩展，那就没有必要定义Mediator接口。**

ConcreteMediator：具体的中介者实现对象。它需要了解并为维护每个同事对象，并负责具体的协调各个同事对象的交互关系。

Colleague：同事类的定义，通常实现成为抽象类，主要负责约束同事对象的类型，并实现一些具体同事类之间的公共功能，比如，每个具体同事类都应该知道中介者对象，也就是每个同事对象都会持有中介者对象的引用，这个功能可定义在这个类中。

ConcreteColleague：具体的同事类，实现自己的业务，需要与其他同事对象交互时，就通知中介对象，中介对象会负责后续的交互。

**优点**

适当地使用中介者模式可以避免同事类之间的过度耦合，使得各同事类之间可以相对独立地使用。
使用中介者模式可以将对象间一对多的关联转变为一对一的关联，使对象间的关系易于理解和维护。
使用中介者模式可以将对象的行为和协作进行抽象，能够比较灵活的处理对象间的相互作用。

**缺点**

“中介“承担了较多的责任，所以一旦这个中介对象出现了问题，那么整个系统就会受到重大的影响。

**适用场景**

在面向对象编程中，一个类必然会与其他的类发生依赖关系，完全独立的类是没有意义的。一个类同时依赖多个类的情况也相当普遍，既然存在这样的情况，说明，一对多的依赖关系有它的合理性，适当的使用中介者模式可以使原本凌乱的对象关系清晰，但是如果滥用，则可能会带来反的效果。一般来说，只有对于那种同事类之间是网状结构的关系，才会考虑使用中介者模式。可以将网状结构变为星状结构，使同事类之间的关系变的清晰一些
中介者模式是一种比较常用的模式，也是一种比较容易被滥用的模式。对于大多数的情况，同事类之间的关系不会复杂到混乱不堪的网状结构，因此，大多数情况下，将对象间的依赖关系封装的同事类内部就可以的，没有必要非引入中介者模式。滥用中介者模式，只会让事情变的更复杂。

**扩展**

在同事类发生变化的时候，如果有多个中介者，可使用观察者模式将该类的变化告知所有与他有关联的中介者。

## 责任链模式

**定义**

使多个对象都有机会处理请求，从而避免请求的发送者和接收者之间的耦合关系。将这些对象连成一条链，并沿着这条链传递该请求，直到有一个对象处理它为止。（Avoid coupling the sender of a request to itsreceiver by giving morethan one objecta chance to handle the request.Chain the receiving objects andpassthe request along the chain until an object handles it. ）

**参与者**

抽象处理者角色(IHandler)：定义出一个处理请求的接口。如果需要，接口可以定义 出一个方法以设定或返回对下家的引用。

具体处理者角色(ConcreteHandler)：具体处理者接到请求后，可以选择将请求处理掉，或者将请求传给下家。由于具体处理者持有对下家的引用，因此，如果需要，具体处理者可以访问下家。

**类图**

![ChainOfResponsibilityPattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\ChainOfResponsibilityPattern.PNG)

客户端可通过setNextHandler方法设置Handler的顺序

**优点：** 

1、降低耦合度。它将请求的发送者和接收者解耦。 2、简化了对象。使得对象不需要知道链的结构。 3、增强给对象指派职责的灵活性。通过改变链内的成员或者调动它们的次序，允许动态地新增或者删除责任。 4、增加新的请求处理类很方便。

**缺点：** 

1、不能保证请求一定被接收。 2、系统性能将受到一定影响，而且在进行代码调试时不太方便，可能会造成循环调用。 3、可能不容易观察运行时的特征，有碍于除错。

**使用场景：** 

1、有多个对象可以处理同一个请求，具体哪个对象处理该请求由运行时刻自动确定。 2、在不明确指定接收者的情况下，向多个对象中的一个提交一个请求。 3、可动态指定一组对象处理请求。

## 模板方法模式

**定义**

定义一个算法中的操作框架，而将一些步骤延迟到子类中。使得子类可以不改变算法的结构即可重定义该算法的某些特定步骤。（Define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure）

**参与者**

抽象类（AbstractClass）：实现了模板方法，定义了算法的骨架。
具体类（ConcreteClass)：实现抽象类中的抽象方法，已完成完整的算法。

**类图**

![TemplateMethordPattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\TemplateMethordPattern.PNG)

抽象了中确定算法的实现结构，具体类中实现不同算法步骤。这个在处理同一个问题时有多种算法并希望相互比较时非常管用。比如在态势评估的时候，我们的一般步骤为：点航关联->航航关联->航迹融合。其中每一个环节都可有多种算法。但过程是固定的。此时就可使用模板方法模式。

**优点**

1 模板方法模式通过把不变的行为搬移到超类，去除了子类中的重复代码。
2 子类实现算法的某些细节，有助于算法的扩展。
3 通过一个父类调用子类实现的操作，通过子类扩展增加新的行为，符合“开放-封闭原则”。
**缺点**

1 每个不同的实现都需要定义一个子类，这会导致类的个数的增加，设计更加抽象。
**适用场景**

1 在某些类的算法中，用了相同的方法，造成代码的重复。
2 控制子类扩展，子类必须遵守算法规则。

## 策略模式

**定义**

它定义了一系列的算法，并将每一个算法封装起来，而且使它们还可以相互替换。策略模式让算法的变化不会影响到使用算法的客户。（原文：The Strategy Pattern defines a family of algorithms,encapsulates each one,and makes them interchangeable. Strategy lets the algorithm vary independently from clients that use it.）

**参与者**

环境(Context)角色：持有一个Strategy的引用，并调用Strategy的方法。
抽象策略(Strategy)角色：这是一个抽象角色，通常由一个接口或抽象类实现。此角色给出所有的具体策略类所需的接口。
具体策略(ConcreteStrategy)角色：包装了相关的算法或行为。

**类图**

![Strategy](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\Strategy.PNG)

将算法的逻辑抽象接口（DoAlgorithm）封装到一个类中（Context），再通过委托的方式将具体的算法实现委托给具体的Strategy类来实现（ConcreteStratege类）。从而将算法的实现和调用分离。

**优点**

1、算法可以自由切换。 
2、避免使用多重条件判断。 
3、扩展性良好
**缺点**

1、客户端必须知道所有的策略类，并自行决定使用哪一个策略类
2、策略模式将造成产生很多策略类
3、所有策略类都需要对外暴露

**适用场景**

1、如果在一个系统里面有许多类，它们之间的区别仅在于它们的行为，那么使用策略模式可以动态地让一个对象在许多行为中选择一种行为。 
2、一个系统需要动态地在几种算法中选择一种。 
3、如果一个对象有很多的行为，如果不用恰当的模式，这些行为就只好使用多重的条件选择语句来实现。

**多说一句**

与模板方法模式的区别：

模板方法更加强调：
1）定义一条线（算法流程），线上的多个点是可以变化的（具体实现在子类中完成），线上的多个点一定是会被执行的，并且一定是按照特定流程被执行的。
2）算法流程只有唯一的入口，对于点的访问是受限的【通常用受保护的虚函数来定义可变点】。

策略模式更注重于： 一个“策略”是一个 整体的(完整的) 算法，算法是可以被整体替换的。而模板方法只能被替换其中的特定点，算法流程是固定不可变的。

与命令模式的区别：

命令模式中命令（算法）的执行者（接受者）是一个具体的类，而策略模式中算法直接在具体的策略类中实现。

Why？命令模式应用的场景就是将命令的调用者和接收者解耦，通过命令来进行封装，即它事先已经有了命令的调用者和接收者。

## 命令模式

**定义**

将一个请求封装为一个对象，从而使我们可用不同的请求对客户进行参数化；对请求排队或者记录请求日志，以及支持可撤销的操作。（Encapsulate a request as an object, thereby letting you parameterize clients with different requests, queue or log requests,and support undoable operations. ）。命令模式又称为动作(Actio)模式或事务(Transaction)模式。

**参与者**

调用者(Invoker): 要求该命令执行这个请求。通常会持有命令对象，可以持有很多的命令对象。
抽象命令类(Command): 声明执行操作的接口。调用接收者相应的操作，以实现执行的方法Execute。
具体命令类(ConcreteCommand): 创建一个具体命令对象并设定它的接收者。通常会持有接收者，并调用接收者的功能来完成命令要执行的操作。 
接收者(Receiver): 知道如何实施与执行一个请求相关的操作。任何类都可能作为一个接收者,只要它能够实现命令要求实现的相应功能。 

**类图**

![CommandPattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\CommandPattern.PNG)

CommandManager类是Invoker类的一个变种，它实现了重做（redo）和撤销（undo）操作。

**优点**

1) 降低系统的耦合度:Command模式将调用操作的对象与知道如何实现该操作的对象解耦。
2) Command是头等的对象。它们可像其他的对象一样被操纵和扩展。
3) 组合命令:你可将多个命令装配成一个组合命令，即可以比较容易地设计一个命令队列和宏命令。一般说来，组合命令是Composite模式的一个实例。
4) 增加新的Command很容易，因为这无需改变已有的类。
5）可以方便地实现对请求的Undo和Redo。

**缺点**

因为针对每一个命令都需要设计一个具体命令类，使用命令模式可能会导致系统有过多的具体命令类。

**适用场景**

1）使用命令模式作为"CallBack"在面向对象系统中的替代。"CallBack"讲的便是先将一个函数登记上，然后在以后调用此函数。
2）需要在不同的时间指定请求、将请求排队。一个命令对象和原先的请求发出者可以有不同的生命期。换言之，原先的请求发出者可能已经不在了，而命令对象本身仍然是活动的。这时命令的接收者可以是在本地，也可以在网络的另外一个地址。命令对象可以在串形化之后传送到另外一台机器上去。
3）系统需要支持命令的撤消(undo)。命令对象可以把状态存储起来，等到客户端需要撤销命令所产生的效果时，可以调用undo()方法，把命令所产生的效果撤销掉。命令对象还可以提供redo()方法，以供客户端在需要时，再重新实施命令效果。
4）如果一个系统要将系统中所有的数据更新到日志里，以便在系统崩溃时，可以根据日志里读回所有的数据更新命令，重新调用Execute()方法一条一条执行这些命令，从而恢复系统在崩溃前所做的数据更新。

## 备忘录模式

**定义**

在不破坏封闭的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态。这样以后就可将该对象恢复到原先保存的状态。

**参与者**

Originator(发起人)：负责创建一个备忘录Memento，用以记录当前时刻自身的内部状态，并可使用备忘录恢复内部状态。Originator可以根据需要决定Memento存储自己的哪些内部状态。

Memento(备忘录)：负责存储Originator对象的内部状态，并可以防止Originator以外的其他对象访问备忘录。备忘录有两个接口：Caretaker只能看到备忘录的窄接口，他只能将备忘录传递给其他对象。Originator却可看到备忘录的宽接口，允许它访问返回到先前状态所需要的所有数据。

Caretaker(管理者):负责备忘录Memento，不能对Memento的内容进行访问或者操作。

**类图**

![Momento](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\Momento.PNG)

将Originator声明为Momento的友元类，这样Originator就可访问Momento的私有方法。而CareTaker则不可以，它只是Momento的容器，并不能访问Momento的内部成员。

**优点**

1、给用户提供了一种可以恢复状态的机制，可以使用户能够比较方便地回到某个历史的状态。 
2、实现了信息的封装，使得用户不需要关心状态的保存细节。

**缺点**

消耗资源。如果类的成员变量过多，势必会占用比较大的资源，而且每一次保存都会消耗一定的内存。

**适用场景**

1、需要保存/恢复数据的相关状态场景。 
2、提供一个可回滚的操作。

## 备忘录模式

**定义**

在不破坏封闭的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态。这样以后就可将该对象恢复到原先保存的状态。

**参与者**

Originator(发起人)：负责创建一个备忘录Memento，用以记录当前时刻自身的内部状态，并可使用备忘录恢复内部状态。Originator可以根据需要决定Memento存储自己的哪些内部状态。

Memento(备忘录)：负责存储Originator对象的内部状态，并可以防止Originator以外的其他对象访问备忘录。备忘录有两个接口：Caretaker只能看到备忘录的窄接口，他只能将备忘录传递给其他对象。Originator却可看到备忘录的宽接口，允许它访问返回到先前状态所需要的所有数据。

Caretaker(管理者):负责备忘录Memento，不能对Memento的内容进行访问或者操作。

**类图**

![Momento](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\Momento.PNG)

将Originator声明为Momento的友元类，这样Originator就可访问Momento的私有方法。而CareTaker则不可以，它只是Momento的容器，并不能访问Momento的内部成员。

**优点**

1、给用户提供了一种可以恢复状态的机制，可以使用户能够比较方便地回到某个历史的状态。 
2、实现了信息的封装，使得用户不需要关心状态的保存细节。

**缺点**

消耗资源。如果类的成员变量过多，势必会占用比较大的资源，而且每一次保存都会消耗一定的内存。

**适用场景**

1、需要保存/恢复数据的相关状态场景。 
2、提供一个可回滚的操作。

## 状态模式

**定义**

允许一个对象在其内部状态改变时改变它的行为。对象看起来似乎修改了它的类(Allow an object to alter its behavior when its internal state changes. The object will appear to change its class)

**参与者**

上下文环境（Context）：它定义了客户程序需要的接口并维护一个具体状态角色的实例，将与状态相关的操作委托给当前的Concrete State对象来处理。
抽象状态（State）：定义一个接口以封装使用上下文环境的的一个特定状态相关的行为。
具体状态（Concrete State）：实现抽象状态定义的接口。

**一个例子**

该模式还是比较难理解的，网上大多都比较简单（要么状态中的方法只有一个，要么下一状态是唯一的）。不利于正真的理解状态模式。网上有一个通过电梯状态来作为例子的[java实现](http://blog.csdn.net/u012401711/article/details/52675873)，讲的还是比较清楚的。本节参考该网页，给出C++的实现。**该例子还是比较复杂的，但如果想深入了解状态模式，还是应该认真看完**

首先，分析一下电梯有哪些特定状态：
open---按了电梯上下按钮，电梯门开，这就是门敞状态；在这个状态下电梯只能做的动作是关门动作，做别的动作？那就危险喽
close---电梯门关闭了，在这个状态下，可以进行的动作是：开门（我不想坐电梯了）、停止（忘记按路层号了）、运行
run---电梯正在跑，上下窜，在这个状态下，电梯只能做的是停止；
stop---电梯停止不动，在这个状态下，电梯有两个可选动作：继续运行和开门动作；

做成一张状态表：

|       | open | close | run  | stop |
| ----- | ---- | ----- | ---- | ---- |
| open  | 0    | 1     | 0    | 0    |
| close | 1    | 0     | 1    | 1    |
| run   | 0    | 0     | 0    | 1    |
| stop  | 1    | 0     | 1    | 0    |

其中1表示可以过渡到下一状态，0表示不可以过度到下一状态。

接着，我们来思考这些状态是由什么动作触发而产生以及在这个状态下电梯还能做什么事情，举个例子来说，电梯在停止状态时，我们来思考两个问题：
1、这个停止状态时怎么来的，那当然是由于电梯执行了stop 方法而来的；
2、在停止状态下，电梯还能做什么动作?继续运行？开门？那当然都可以了。

分析其他三个状态，也都是一样的结果，这样我们只要实现电梯在一个状态下的两个任务模型就可以了：
1、这个状态是如何产生的
2、这个状态下还能做什么其他动作（也就是这个状态怎么过渡到其他状态）

既然我们以状态为参考模型，那我们就先定义电梯的状态接口，思考过后我们来看类图：

**类图**

![State](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\State.PNG)

在类图中，定义了一个State抽象类，声明了一个受保护的类型Context变量，这个是串联我们各个状态的封装类，封装的目的很明显，就是电梯对象内部状态的变化不被调用类知晓，也就是迪米特法则了，我的类内部情节你知道越少越好，并且还定义了四个具体的实现类，承担的是状态的产生以及状态间的转换过渡，我们先来看State 程序:

```cpp
//State.h
#pragma once

#include "Context.h"
#include <iostream>

class State {
public:
	void setContext(Context* context);
	Context* getContext();
	virtual void open() {};
	virtual void stop() {};
	virtual void run() {};
	virtual void close() {};
private:
	Context* context;
};
```

```cpp
//State.cpp
#include "../inc/Context.h"
#include "../inc/State.h"

void State::setContext(Context* context) {
	this->context = context;
}
Context* State::getContext() { return context; }
```

抽象类比较简单，我们来先看一个具体的实现，门敞状态的实现类：

```cpp
//OpeningState.h
#pragma once

#include "State.h"
using namespace std;

class OpeningState : public State{
public:
	void open() { cout << "opening" << endl; }
public:
	//Implement the next possible action, and doing it
	void close();
};
```

```cpp
//OpeningState.cpp
#include "../inc/OpeningState.h"
#include "../inc/ClosingState.h"

void OpeningState::close() {
	cout << "电梯开了，进完人把门关上: ";
	getContext()->setState(new ClosingState());
	getContext()->close();
}
```

类中有两个方法:open()和close()。

Openning状态是由open()方法产生的，因此这个方法中有一个具体的业务逻辑；

在Openning状态下，电梯能过渡到其他什么状态呢？按照现在的定义的是只能过渡到Closing状态，因此我们在Close()中定义了状态变更，同时把Close这个动作也委托了给CloseState类下的Close方法执行，这个可能不好理解，我们再看看Context类就可能好理解一点：

```cpp
//Context.h
#pragma once

class State;

class Context {
public:
	void setState(State* state);
	State* getState();
	void open();
	void stop();
	void run();
	void close();
private:
	State* state;
};
```

```cpp
//Context.cpp
#include "../inc/Context.h"
#include "../inc/State.h"

void Context::setState(State* state) {
	this->state = state;
	this->state->setContext(this);
}
State* Context::getState() { return state; }
void Context::open() { state->open(); }
void Context::stop() { state->stop(); }
void Context::run() { state->run(); }
void Context::close() { state->close(); }
```

结合以上三个类，我们可以这样理解，Context是一个环境角色，它的作用是串联各个状态的过渡，在State抽象类中我们定义了并把这个环境角色聚合进来，并传递到了子类，也就是四个具体的实现类中自己根据环境来决定如何进行状态的过渡。我们把其他的三个具体实现类阅读完毕，下面是关闭状态：

```cpp
//ClosingState.h
#pragma once

#include "State.h"
using namespace std;

class ClosingState : public State {
public:
	void close() { cout << "closeing" << endl; }
public:
	//Implement the next possible action, and doing it
	void open();
	void run();
	void stopping();
};
```

```cpp
//ClosingState.cpp
#include "../inc/ClosingState.h"
#include "../inc/OpeningState.h"
#include "../inc/RunningState.h"
#include "../inc/StoppingState.h"

void ClosingState::open() {
	cout << "电梯关了，再打开 : ";
	getContext()->setState(new OpeningState());
	getContext()->open();
}

void ClosingState::run() {
	cout << "电梯关了，开始运行: ";
	getContext()->setState(new RunningState());
	getContext()->run();
}

void ClosingState::stopping() {
	cout << "电梯关了，没按楼层，时间都静止了: ";
	getContext()->setState(new StoppingState());
	getContext()->stop();
}
```

下面是停止状态：

```cpp
//Stopping.h
#pragma once

#include "State.h"
using namespace std;

class StoppingState : public State {
public:
	void stop() { cout << "stopping" << endl; }
public:
	//Implement the next possible action, and doing it
	void open();
};
```

```cpp
//StoppingState.cpp
#include "../inc/StoppingState.h"
#include "../inc/OpeningState.h"

void StoppingState::open() {
	cout << "电梯停了，开门 : ";
	getContext()->setState(new OpeningState());
	getContext()->open();
}
```

业务逻辑都已经实现了，我们来看看Client 怎么实现：

```cpp
TestState() {
	Context* context = new Context();
	context->setState(new OpeningState());
	cout << "电梯来了，开门： ";
	context->open();
	context->close();
	context->run();
	context->stop();
	context->open();
}
```

Client 调用类太简单了，只要定义个电梯的初始状态，然后调用相关的方法，就完成了，完全不用考虑状态的变更，看运行结果：

```
电梯来了，开门： opening
电梯开了，进完人把门关上: closeing
电梯关了，开始运行: running
到达楼层，停止: stopping
电梯停了，开门 : opening
请按任意键继续. . .
```

它符合开闭原则么?如果在我们这个例子中要增加两个状态，一个是通电状态，一个是断电状态，同时修改其他实现类的相应方法，因为状态要过渡呀，那当然要修改原有的类，只是在原有类中的方法上增加，而不去做修改
它符合迪米特法则原则么?我们现在呢是各个状态是单独的一个类，只有与这个状态的有关的因素修改了这个类才修改，符合。

**代码中需要注意的点**

1、Context类和State类相互关联，因此需要用到前置声明。不能使用前置声明类的方法，否则会报错（b->funB()的左边必须指向类/结构/联合/泛型类型）

```cpp
class B;
class A{
public:
  void funA(){b->funB();}
private:
  B* b;
};
```

2、各类相互依赖，因此最好把类中方法的声明和实现分开，在cpp文件中包含其他状态的头文件。

**优点**

1、封装了转换规则。 
2、枚举可能的状态，在枚举状态之前需要确定状态种类。 
3、将所有与某个状态有关的行为放到一个类中，并且可以方便地增加新的状态，只需要改变对象状态即可改变对象的行为。 
4、允许状态转换逻辑与状态对象合成一体，而不是某一个巨大的条件语句块。 
5、可以让多个环境对象共享一个状态对象，从而减少系统中对象的个数。

**缺点**

1、状态模式的使用必然会增加系统类和对象的个数。 
2、状态模式的结构与实现都较为复杂，如果使用不当将导致程序结构和代码的混乱。 
3、如果需要增加状态类还是比较复杂的，需要在牵连的状态类中做以修改

**适用场景**

代码中包含大量与对象状态有关的条件语句。

## 适配器模式

**定义**

适配器模式将某个类的接口转换成客户端期望的另一个接口表示，主的目的是兼容性，让原本因接口不匹配不能一起工作的两个类可以协同工作。其别名为包装器(Wrapper)。

**参与者**

Target目标角色：期望接口，客户端调用接口
Adaptee源角色：期望被转换的角色，原先就有的库接口，期望能被直接使用
Adapter适配器角色：核心，将元角色转换为目标角色，通过继承或者类关联的方式

**类图**

类模式：

![类模式](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\AdapterPattern\类模式.png)

对象模式：

![对象模式](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\AdapterPattern\对象模式.png)

**优点**

1、可以让任何两个没有关联的类一起运行。 
2、提高了类的复用。 
3、增加了类的透明度。 
4、灵活性好。

**缺点**

1、过多地使用适配器，会让系统非常零乱，不易整体进行把握。比如，明明看到调用的是 A 接口，其实内部被适配成了 B 接口的实现，一个系统如果太多出现这种情况，无异于一场灾难。因此如果不是很有必要，可以不使用适配器，而是直接对系统进行重构。

**适用场景**

1、系统需要使用现有的类，而这些类的接口不符合系统的需要。 
2、想要建立一个可以重复使用的类，用于与一些彼此之间没有太大关联的一些类，包括一些可能在将来引进的类一起工作。 
3、需要一个统一的输出接口，而输入端的类型不可预知。

## 桥接模式

**定义**

桥接模式即将抽象部分与它的实现部分分离开来，使他们都可以独立变化。（Decouple an abstraction from its implementation so that the two can vary independently）

**参与者**

抽象化(Abstraction)角色：抽象类接口（接口这货抽象类）维护队行为实现（implementation）的引用。它的角色就是桥接类。

修正抽象化(Refined Abstraction)角色：扩展抽象化角色，改变和修正父类对抽象化的定义。

实现化(Implementor)角色：这个角色给出实现化角色的接口，但不给出具体的实现。Implementor角色应当只给出底层操作，而Abstraction角色应当给出基于Implementor接角色的更高层次的操作。

具体实现化(Concrete Implementor)角色：这个角色给出实现化角色接口的具体实现。

**类图**

![BridgePattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\BridgePattern.PNG)

**优点**

（1）实现了抽象和实现部分的分离
桥接模式分离了抽象部分和实现部分，从而极大的提供了系统的灵活性，让抽象部分和实现部分独立开来，分别定义接口，这有助于系统进行分层设计，从而产生更好的结构化系统。对于系统的高层部分，只需要知道抽象部分和实现部分的接口就可以了。
（2）更好的可扩展性
由于桥接模式把抽象部分和实现部分分离了，从而分别定义接口，这就使得抽象部分和实现部分可以分别独立扩展，而不会相互影响，大大的提供了系统的可扩展性。
（3）可动态的切换实现
由于桥接模式实现了抽象和实现的分离，所以在实现桥接模式时，就可以实现动态的选择和使用具体的实现。
（4）实现细节对客户端透明，可以对用户隐藏实现细节。

**缺点**

（1）桥接模式的引入增加了系统的理解和设计难度，由于聚合关联关系建立在抽象层，要求开发者针对抽象进行设计和编程。
（2）桥接模式要求正确识别出系统中两个独立变化的维度，因此其使用范围有一定的局限性。

**适用场景**

（1）如果一个系统需要在构件的抽象化角色和具体化角色之间增加更多的灵活性，避免在两个层次之间建立静态的继承联系，通过桥接模式可以使它们在抽象层建立一个关联关系。
（2）抽象化角色和实现化角色可以以继承的方式独立扩展而互不影响，在程序运行时可以动态将一个抽象化子类的对象和一个实现化子类的对象进行组合，即系统需要对抽象化角色和实现化角色进行动态耦合。
（3）一个类存在两个独立变化的维度，且这两个维度都需要进行扩展。
（4）虽然在系统中使用继承是没有问题的，但是由于抽象化角色和具体化角色需要独立变化，设计要求需要独立管理这两者。
（5）对于那些不希望使用继承或因为多层次继承导致系统类的个数急剧增加的系统，桥接模式尤为适用

## 组合模式

**定义**

将对象组合成树形结构以表示“部分整体”的层次结构。组合模式使得用户对单个对象和组合对象的使用具有一致性。

**参与者**

1.Component 是组合中的对象声明接口，在适当的情况下，实现所有类共有接口的默认行为。声明一个接口用于访问和管理Component子部件。

2.Leaf 在组合中表示叶子结点对象，叶子结点没有子结点。

3.Composite 定义有枝节点行为，用来存储子部件，在Component接口中实现与子部件有关操作，如增加(add)和删除(remove)等。

**类图**

![CompositePattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\CompositePattern.jpg)

**本图来自《大话设计模式》**

**优点**

1、高层模块调用简单。 
2、节点自由增加。

**缺点**

在使用组合模式时，其叶子和树枝的声明都是实现类，而不是接口，违反了依赖倒置原则。

**适用场景**

当你发现需求中是体现部分与整体层次的结构时（即树形结构），以及你希望用户可以忽略组合对象与单个对象的不同，统一的使用组合结构中的所有对象时。