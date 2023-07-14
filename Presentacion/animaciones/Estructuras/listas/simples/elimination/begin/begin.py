from manim import *
import numpy as np

class Begin(Scene):
    def construct(self):
        n=4
        colors = [RED,GREEN,BLUE,YELLOW]
        nodos = VGroup(*[Rectangle(height=1, width=0.5,color=WHITE) for _ in range(n)])
        rectangles = VGroup(*[Rectangle(height=1, width=1,color = colors[_]) for _ in range(n)])
        arrow = VGroup(*[Arrow(start=LEFT,end=RIGHT*0.1) for _ in range(n)] )
        nulo = Rectangle(height=1, width=1,color=WHITE)    
        nulo.move_to(np.array([-5,0,0]))  

        self.play(Create(nulo))
       
        lista = []

        for i in range(n):
            nodos[i].set_fill(color=colors[3-i],opacity=1)
            rectangles[i].set_fill(color=colors[i],opacity=1)
            nodos[i].next_to(rectangles[i],buff=0)
            arrow[i].next_to(nodos[i])
            lista.append(VGroup(rectangles[i],nodos[i],arrow[i]))
       

        for i in range(n):
            lista[i].move_to(np.array([-5 + 2.5*i,0,0]))
            nulo.next_to(lista[i])
            self.play(Create(lista[i]))
        self.add((nulo))
        self.play(FadeOut(lista[0]))
        
        self.wait()