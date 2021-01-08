animal = {
    'aguia': ['vertebrado', 'ave', 'carnivoro'],
    'pomba': ['vertebrado', 'ave', 'onivoro'],
    'homem': ['vertebrado', 'mamifero', 'onivoro'],
    'vaca': ['vertebrado', 'mamifero', 'herbivoro'],
    'pulga': ['invertebrado', 'inseto', 'hematofago'],
    'lagarta': ['invertebrado', 'inseto', 'herbivoro'],
    'sanguessuga': ['invertebrado', 'anelideo', 'hematofago'],
    'minhoca': ['invertebrado', 'anelideo', 'onivoro']
}

def get_key(val):
    for key, value in animal.items():
        if val == value:
            return key

l = []
l.append(input())
l.append(input())
l.append(input())

print(get_key(l))


