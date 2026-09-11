from openai import OpenAI

client = OpenAI(
    api_key='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'
)

question = input("what do you want?? ")

answer = client.responses.create(
    input=question,
    model='gpt-5.6-luna',
    store=True
)

print(answer.output_text)
