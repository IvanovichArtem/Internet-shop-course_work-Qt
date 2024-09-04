import pandas as pd
import xml.etree.ElementTree as ET

# Функция для парсинга XML
def parse_xml(xml_data):
    root = ET.fromstring(xml_data)
    entry = {}
    for child in root:
        entry[child.tag] = child.text
    return entry

# Обработка больших файлов по частям
chunk_size = 10000  # Количество строк за раз
data = []

# Чтение файла по частям
for chunk in pd.read_csv('data.txt', chunksize=chunk_size, header=None):
    for index, row in chunk.iterrows():
        id_value = row[0]
        xml_data = row[1]
        entry = parse_xml(xml_data)
        entry['id'] = id_value
        data.append(entry)

    # Сохранение промежуточных результатов
    pd.DataFrame(data).to_csv('output.csv', mode='a', header=not bool(data), index=False)

    # Очистка списка данных
    data.clear()

# Если остались данные, сохраним их
if data:
    pd.DataFrame(data).to_csv('output.csv', mode='a', header=not bool(data), index=False)
