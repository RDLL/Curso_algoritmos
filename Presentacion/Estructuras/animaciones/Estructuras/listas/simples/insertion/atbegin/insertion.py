from manim import *
import numpy as np

class Lista(Scene):
    def construct(self):
        colors = [RED,GREEN,BLUE,YELLOW]
        nodos = VGroup(*[Rectangle(height=1, width=0.5,color=WHITE) for _ in range(4)])
        rectangles = VGroup(*[Rectangle(height=1, width=1,color = colors[_]) for _ in range(4)])
        arrow1 = Arrow(start=UP,end=DOWN)
        arrow1.move_to(np.array([-6,2,0]))
        nulo = Rectangle(height=1, width=1,color=WHITE)    
        nulo.move_to(np.array([-6,2,0]))
        nodo = Rectangle(height=1, width=1)
        nodo.move_to(np.array([-6,2,0]))

        for i in range(4):
            rectangles[i].move_to(np.array([-6,0,0]))    

        self.play(Create(nulo))

        self.play(Create(arrow1))

        self.play(ApplyMethod(nulo.shift,DOWN * 2))
        
        lista = []

        for i in range(4):
            nodo.color=colors[i]
            nodo.set_fill(color=colors[i],opacity=1)
            nodos[i].set_fill(color=colors[3-i],opacity=1)
            rectangles[i].set_fill(color=colors[i],opacity=1) 
            nodos[i].next_to(rectangles[i],buff=0)
            lista.append(VGroup(rectangles[i],nodos[i]))

        for i in range(4):
            lista[i].shift(RIGHT * 3)
            for j in range(i):
                lista[j].shift(RIGHT *3)
            self.play(Create(lista[i]))
        self.wait()