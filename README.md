# Aritmetica-di-macchina_stabilita-numerica_sistemi-lineari
## Primo laboratorio del corso universitario Agebra Lineare e Analisi numerica:

### Esercizio 1
Il primo esercizio chiede, dati 2 valori, di creare 3 variabili denominate a, b, c e di misurare i risultati delle
espressioni (a+b)+c e a+(b+c).<br>
<br>
> Valori dati in input: &emsp; &emsp; Valori di a, b e c:<br>
> d0 = 5; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; a = (d0 + 1)( 10 i )<br>
> d1 = 0; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; b = (d1 + 1)( 10 20 )<br>
> &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &emsp; &ensp; c = -b<br>
#### Output
![output image](/images/es1_ph1.png) ![output image](/images/es1_ph2.png)<br>
Come possiamo osservare dai vari output nel caso (a+b)+c è presente un evidente errore di calcolo:
dati un valore molto grande per b (che nel nostro caso è uguale a 10^20 ), un valore a rispettivamente
piccolo ed essendo c l’opposto di b il calcolatore considererà (a+b) ≈ b e vedrà l'operazione successiva
come un annullamento.
Nei casi in cui a è sufficientemente grande in proporzione a b l’errore diventa sempre più piccolo,
essendo a sempre più significativo nel valore a+b, se il valore di i aumentasse ancora vedremmo
l’errore algoritmico diventare 0.
Nel secondo algoritmo a+(b+c) questo non succede perché la cancellazione avviene prima della
somma di a+b non incrementando pertanto il suo errore algoritmico.
<br>
### Esercizio 2
In questo esercizio abbiamo utilizzato il polinomio di Taylor sulla funzione $(e^x)$ <br>
> Funzione:<br>
> f (x) = $e^x$ <br>
> Polinomio di Taylor:<br>
 ![Taylor formula](/images/es2_ph1.png)<br>
#### Output
Il polinomio di Taylor è così strutturato: data una funzione e un valore N che rappresenta il numero di
ripetizioni della sommatoria, da un risultato approssimato di f(x) il quale diventa più preciso
assegnando ad N un valore sempre più grande.
Abbiamo implementato due algoritmi e per entrambi abbiamo effettuato il calcolo degli eroori assoluto e
relativo:
##### Algoritmo 1:
Utilizza il polinomio di Taylor con i valori di N uguali a: 3,10,50,100,200 e i valori di x uguali a: 0.5, 30,
-0.5, -30 e studia ogni combinazione tra essi.
![output image](/images/es2_ph2.png)
Come si può notare dagli output sopra riportati maggiore è il valore di N, maggiore è la precizione del
polinomio, mentre all'aumentare della dimensione di x la precisione diminuisce.
Applicando il polinomio di Taylor direttamnete alle x con valore negativo si evince un’inefficacia
dell’approssimazione. Per x = -30 e grado 150 il polinomio di Taylor vale -4.82085e-06. Questo risultato
è ben diverso da quello atteso cioè 9.35762e-14.
questo è causato dalla cancellazione avvenuta nella sommatoria del polinomio dato che la somma dei
termini positivi è in modulo uguale alla somma di quelli negativi.

##### Algoritmo 2:
L'altro invece utilizza la funzione:<br>
![output image](/images/es2_ph3.png)<br>
con i medesimi valori di N dell'algoritmo precedente mentre i valori di xutilizzati sono solamente quelli minori di 0. (il denominatore è il polinomio di Taylor definito precdentemente con x negativa)<br>
![output image](/images/es2_ph4.png)<br>
Come possiamo notare dall'output all'aumentare di N i valori sono più precisi fino a giungere al rislutato corretto.
### Esercizio 3:
In questo esercizio dobbiamo trovare il valore di eps (precisione di macchina) con eps
= 2 −d
Per riuscirci, abbiamo scelto un numero arbitrariamente piccolo ( 0 ) per l’esponente e, attraverso un
ciclo, abbiamo aumentato il valore di d fino a che l’espressione 1 + 2 −d desse come risultato 1.
A questo punto sappiamo di aver superato il valore corretto di d e pertanto: <br>
> $eps = 2^{-(d-1)}$
##### Output:
![output image](/images/es3.png)

## Componenti del gruppo:
Giovanetti Davide: S4823205 <br>
Sartori Alice: S4819455 <br>
Terrosi Marco: S4867414 <br>
## Dettagli calcolatore
S.O.: linux mint 20 cinnamon <br>
Kernel: 5.4.0-52-generic <br>
Processore: AMD Ryzen 5 3500U with Radeon Vega Mobile Gfx × 4

