from ListaLigada import ListaLigada as LL
from ListaLigadaOrdenada import ListaLigadaOrdenada as LLO
from ListaLigada import No as No

def main(): 
    lista_ligada = LL() 
    lista_ligada_ordenada = LLO()
    
    lista_ligada.inserir_inicio(1)
    lista_ligada.inserir_inicio(2)
    lista_ligada.inserir_fim(3)
    
    lista_ligada_ordenada.inserir_no(1)
    lista_ligada_ordenada.inserir_no(11)
    lista_ligada_ordenada.inserir_no(3)

     
    print("\nLISTA LIGADA SIMPLES")    
    lista_ligada.imprimir_lista()
    
    print("\nLISTA LIGADA ORDENADA")    
    lista_ligada_ordenada.imprimir_lista()

main() 