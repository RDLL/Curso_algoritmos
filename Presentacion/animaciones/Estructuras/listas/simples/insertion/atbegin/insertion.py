from manim import *
import numpy as np

class Lista(Scene):
    def construct(self):
        colors = [RED,GREEN,BLUE,YELLOW]
        nodos = VGroup(*[Rectangle(height=1, width=0.5,color=WHITE) for _ in range(4)])
        rectangles = VGroup(*[Rectangle(height=1, width=1,color = colors[_]) for _ in range(4)])
        arrow = VGroup(*[Arrow(start=LEFT,end=RIGHT*0.1) for _ in range(4)] )
        nulo = Rectangle(height=1, width=1,color=WHITE)    
        nulo.move_to(np.array([-4,0,0]))

        for i in range(4):
            rectangles[i].move_to(np.array([-6,0,0]))    

        self.play(Create(nulo))
       
        lista = []


        for i in range(4):
            nodos[i].set_fill(color=colors[3-i],opacity=1)
            rectangles[i].set_fill(color=colors[i],opacity=1)
            nodos[i].next_to(rectangles[i],buff=0)
            arrow[i].next_to(nodos[i])
            lista.append(VGroup(rectangles[i],nodos[i],arrow[i]))
       

        for i in range(4):
            lista[i].shift(RIGHT * 2.5)
            for j in range(i):
                lista[j].shift(RIGHT *2.5)
            nulo.next_to(lista[0])
            self.add((nulo))
            self.play(Create(lista[i]))
            
        self.wait()