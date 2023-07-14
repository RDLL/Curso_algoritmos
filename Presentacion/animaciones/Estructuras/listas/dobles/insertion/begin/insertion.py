from manim import *
import numpy as np

class Begin(Scene):
    def construct(self):
        colors = [RED,GREEN,BLUE,YELLOW]
        nodos = VGroup(*[Rectangle(height=1, width=0.5,color=WHITE) for _ in range(4)])
        nodosa = VGroup(*[Rectangle(height=1, width=0.5,color=WHITE) for _ in range(4)])
        rectangles = VGroup(*[Rectangle(height=1, width=1,color = colors[_]) for _ in range(4)])
        sig = VGroup(*[Arrow(start=LEFT,end=RIGHT*0.1) for _ in range(4)] )
        ant = VGroup(*[Arrow(start=RIGHT,end=LEFT*0.1) for _ in range(4)] )
        nulo = Rectangle(height=1, width=1,color=WHITE)    
        nulo.move_to(np.array([-5,0,0]))

        for i in range(4):
            nodosa[i].move_to(np.array([-9,0,0]))    

        self.play(Create(nulo))
       
        lista = []


        for i in range(4):
            nodos[i].set_fill(color=colors[3-i],opacity=1)
            nodosa[i].set_fill(color=colors[3-i],opacity=1)
            rectangles[i].set_fill(color=colors[i],opacity=1)
            rectangles[i].next_to(nodosa[i],buff=0)
            nodos[i].next_to(rectangles[i],buff=0)
            sig[i].next_to(nodos[i])
            sig[i].shift(UP * 0.3)
            ant[i].next_to(nodos[i])
            ant[i].shift(DOWN * 0.3)
            lista.append(VGroup(nodosa[i],rectangles[i],nodos[i],sig[i],ant[i]))
       

        for i in range(4):
            lista[i].shift(RIGHT * 3)
            for j in range(i):
                lista[j].shift(RIGHT * 3)
            nulo.next_to(lista[0])
            self.add((nulo))
            self.play(Create(lista[i]))
        self.wait()