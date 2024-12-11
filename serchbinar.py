nil = None;
class tree:
    def __init__(self,valoare = nil):
        self.vlr = valoare;
        if self.vlr:
            self.stanga = tree()
            self.dreapta = tree()
        else:
            self.stanga = nil
            self.dreapta = nil
cp = tree(5)
        