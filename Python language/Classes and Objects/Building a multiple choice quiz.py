from Question_paper import question

question_prompts=[
    'What color are apples?\na)Red/green\nb)Purple\nc)Orange\n\n',
    'What color are bananas?\na)Teal\nb)Magenta\nc)Yellow\n\n',
    'What color are strawberry?\na)Yellow\nb)Red\nc)Blue\n\n'
]

questions=[
    question(question_prompts[0],'a'),
    question(question_prompts[1],'c'),
    question(question_prompts[2],'b'),
]

def run_test(que):
    score=0
    for que in questions:
        answer=input(que.prompt)
        if answer==que.answer:
            score+=1
    print('You got '+str(score) +' / '+str(len(questions))+' correct.')

run_test(questions)