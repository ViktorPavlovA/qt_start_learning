## /ex1 

Работать будем в среде qt-creator, для установки понадобится следущие пакеты на linux:

`sudo apt install -y qtcreator qtbase5-dev qt5-qmake cmake`


Файл **.pro** основной файл проекта посути выступает cmake'ом 

```
TEMPLATE = app // описание собираемого пакетаъ

TARGET = ex1 // имя приложения

QT = core gui // подключение библиотеки QtCore

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets // проверка версии и добавление библиотеки QtWidgets

SOURCES += \
    main.cpp // добавление .cpp

HEADERS += \
    some_headers.h // добавление хэдора


```

1. **QApplication** - класс для обработки входных аргументов, обработка цикла событий, например который ожидает ввобда данных пользователем в приложениях с графическим интерфейсом

2. **QPushButton** - класс для создания примитивных кнопок

3. **QDir** - класс работы с каталогами, например получение текущего каталога

4. **QWidget** - создание окна с чем то



### Добавление стороних библиотек

В качестве примера добавим iostream: 

Для этого надо понять в какой директории он лежит:

`locate` - чтобы найти его.

Теперь вопрос в том как подключить этот хэдер по ссылке для этого прописываем в `.pro`:

```
    INCLUDEPATH += /usr/include/c++/11/

    CONFIG += c++11 c++14 c++17

```
