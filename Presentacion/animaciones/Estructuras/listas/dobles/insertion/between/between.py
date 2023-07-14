from manim import *
import numpy as np

class Between(Scene):
    def construct(self):
        n =3
        colors = [RED,GREEN,BLUE]
        nodos = VGroup(*[Rectangle(height=1, width=0.5,color=WHITE) for _ in range(n)])
        rectangles = VGroup(*[Rectangle(height=1, width=1,color = colors[_]) for _ in range(n)])
        arrow = VGroup(*[Arrow(start=LEFT,end=RIGHT*0.1) for _ in range(n)] )
        nulo = Rectangle(height=1, width=1,color=WHITE)    
        nulo.move_to(np.array([-5,0,0]))  
        newvalue = Rectangle(height=1, width=1,color = YELLOW)
        newvalue.set_fill(color = YELLOW,opacity=1)
        newnodo = Rectangle(height=1, width=0.5,color=WHITE)
        newnodo.set_fill(color=RED,opacity=1)
        newnodo.next_to(newvalue,buff=0)
        insert_value = VGroup(newvalue,newnodo)
        
        insert_value.move_to(np.array([-5,2,0]))

        lista = []

        for i in range(n):
            nodos[i].set_fill(color=colors[2-i],opacity=1)
            rectangles[i].set_fill(color=colors[i],opacity=1)
            nodos[i].next_to(rectangles[i],buff=0)
            arrow[i].next_to(nodos[i])
            lista.append(VGroup(rectangles[i],nodos[i],arrow[i]))

        for i in range(n):
            lista[i].move_to(np.array([-5 + 2.5*i,0,0]))
            nulo.next_to(lista[i])
            self.add(lista[i])
        self.add(nulo)
        self.play(Create(insert_value))
        self.play(ApplyMethod(insert_value.shift,RIGHT * 4))
        self.play(ApplyMethod(nulo.shift,RIGHT * 2.5))
        self.play(ApplyMethod(lista[2].shift,RIGHT * 2.5))        
        self.play(ApplyMethod(insert_value.shift,RIGHT * 0.5))
        self.play(ApplyMethod(insert_value.shift,DOWN * 2))
        newarrow = Arrow(start=LEFT,end=RIGHT*0.1)
        newarrow.next_to(insert_value)
        self.play(Create(newarrow))
        self.wait()