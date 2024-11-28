# o lista predefinita pentru ca urasc cum a pus Pyton niste functii
nil = None;
# fct actuala
class Copac:
    def __init__(self,valoare = nil):
        self.vlr = valoare;
        if self.vlr:
            self.stanga = Copac()
            self.dreapta = Copac()
        else:
            self.stanga = nil
            self.dreapta = nil
            
# stati calm {P.Diddy, Dr. Disrespect, Jeffrey Epstein}, cp e copac aici
cp = Copac(5)
        