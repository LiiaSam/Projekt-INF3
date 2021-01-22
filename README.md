# Projekt-INF3
Program byl vytvořen jako pololetní práce na školní seminář v gymnáziu Jana Keplera.

# Popis
Jedná se o číselnou hru, ve které si 1. hráč vybere náhodné číslo mezi 1 a 10000 a ten 2. ho hádá za pomocí jednoduchých otázek. Hra má 2 módy, číslo hádá člověk a číslo hádá počítač. Program je psaný v jazyku C++ za použití základních knihoven. 

# Technické specifikace
Je potřeba mít nainstalovaný kompilátor na C++. Po stažení programu ho zkomprimujete kompilátorem za pomocí g++ program.cpp -o program

# Použití programu
Hra začne výběrem módu robot nebo clovek. Vybraná postava si bude myslet číslo. V programu se také nachází preventivní opatření vůči používání nefunkčních čísel a slov.

Robot mode
  Hráč napíše, na jaké číslo se chce zeptat a následně vybere, kterou otázku programu položí: je toto číslo větší, menší nebo rovno? V případě, že je číslo rovno hráč vyhraje a program se ukončí.
  
Clovek mode
    Hráč si vymyslí číslo a nechá počítač hádat, o jaké číslo se jedná. Počítač bude pokládat otázku: Je číslo vaše číslo větší než ______? Počítač hádá za pomocí metody quicksort. Jakmile je správné číslo uhádnuto, program se ukončí. 
