from manim import *
import numpy as np

class EliminateArrayValue(Scene):
    def construct(self):
        array = [1, 2, 3, 4, 5,6]  # Initial array
        colors = [RED,GREEN,BLUE,YELLOW,WHITE,GRAY]
        Tam = Text("Tamaño:")
        newcolors = [RED,GREEN,BLUE,YELLOW,WHITE,GRAY]
        val = Text("Valor eliminado")
        # Create rectangles to represent array elements
        rectangles = [Rectangle(height=1, width=1) for _ in array]
        valor = Rectangle(height=1, width=1)
        valor.shift(UP*2)
        valor.set_fill(color=BLACK,opacity=1)
        Tam.shift(LEFT * 3)
        val.move_to(np.array([-4,2,0]))
        # Position and arrange the rectangles on the screen
        for i, rectangle in enumerate(rectangles):
            rectangle.shift(RIGHT * i)  # Shifting each rectangle to the right
            rectangle.set_fill(color=colors[i],opacity=1)

        # Add the rectangles to the scene
        self.add(*rectangles,valor,Tam,val)
        n = len(array)
        y = n
        x = Text(str(y))
        x.shift(LEFT * 1)
        self.add(x)
        # Remove val in rectangle
        # Shift the existing rectangles to make room for the new element
        for i in range(n):
            if i == 2 or i == 4:
                y -= 1
                valor.set_fill(color=colors[i],opacity=1)
                self.add(valor)
                self.play(
                    FadeOut(*rectangles),
                    run_time = 1
                )
                newcolors.remove(colors[i])
                array.pop(i)
                rectangles = [Rectangle(height=1, width=1) for _ in array]
                for j, rectangle in enumerate(rectangles):
                    rectangle.shift(RIGHT * j)  # Shifting each rectangle to the right
                    rectangle.set_fill(color=newcolors[j],opacity=1)
                self.play(
                    FadeOut(valor),
                    run_time = 2
                )
                self.play(
                    FadeOut(x),
                    run_time = 1
                )
                x=Text(str(y))
                x.shift(LEFT * 1)
                valor.set_fill(color=BLACK,opacity=1)
                self.add(*rectangles,valor,x)
            self.wait(1)
            
        self.wait()  # Wait for the animation to complete

#nombre_archivo = "eliminacion.gif"
#exportador = EliminateArray(output_file=nombre_archivo,renderer="PillowRenderer")
#exportador.render(EliminateArray())

