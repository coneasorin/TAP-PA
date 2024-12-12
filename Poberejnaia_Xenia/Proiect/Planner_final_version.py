import sys
from PyQt5.QtWidgets import QApplication, QTableWidget, QTableWidgetItem, QAbstractItemView, QVBoxLayout, QWidget, QPushButton, QCheckBox, QLineEdit, QHBoxLayout, QGridLayout
from PyQt5.QtGui import QColor
from PyQt5.QtCore import Qt

class PlannerApp(QWidget):
    def __init__(self):
        super().__init__()

        # Setam dimensiunele interfetei
        self.setWindowTitle("Planner App")
        self.setGeometry(100, 100, 600, 400)  # Latime: 600px, Inaltime: 400px

        self.table = QTableWidget()
        self.table.setRowCount(3)
        self.table.setColumnCount(3)
        self.table.setHorizontalHeaderLabels(['Checkmarks', 'Status', 'Tasks'])
        self.table.setEditTriggers(QAbstractItemView.AllEditTriggers)

        # Setarea scratching-ului si ocuparii totului spatiu
        self.table.horizontalHeader().setStretchLastSection(True)
        self.table.verticalHeader().setVisible(False)  # Ascundere optionala a header-ului

        self.status_colors = {
            '0%': QColor('red'),
            '25%': QColor('magenta'),
            '50%': QColor('yellow'),
            '75%': QColor('green'),
            '100%': QColor('blue')
        }

        self.checkboxes = []
        for i in range(3):
            checkbox = QCheckBox()
            checkbox.stateChanged.connect(self.update_status_value)
            self.checkboxes.append(checkbox)
            self.table.setCellWidget(i, 0, checkbox)

        # Creare butoane
        self.add_button = QPushButton('Add Row')
        self.add_button.clicked.connect(self.add_row)

        self.delete_button = QPushButton('Delete Row')
        self.delete_button.clicked.connect(self.delete_row)

        # Folosirea de grid layout pentru redemensionare
        layout = QGridLayout()
        layout.addWidget(self.table, 0, 0, 1, 2)    #Tabelul ocupa row 0 si uneste ambele coloane
        layout.addWidget(self.add_button, 1, 0)     #Butonul de adaugare
        layout.addWidget(self.delete_button, 1, 1)  #Butonul de stergere
        
        self.setLayout(layout)

        # Signale de schimbare de status
        self.table.itemChanged.connect(self.update_status_color)
        self.table.itemChanged.connect(self.update_status_background)

        self.show()

    def update_status_color(self, item):
        if item.column() == 1:
            status = item.text()
            font = item.font()
            font.setBold(True)
            item.setForeground(self.status_colors.get(status, QColor('black')))
            item.setBackground(self.status_colors.get(status, QColor('white')))

    def update_status_background(self, item):
        if item.column() == 1:
            status = item.text()
            background = self.status_colors.get(status, QColor('white'))
            item.setBackground(background)

    def update_status_value(self):
        row = self.table.currentRow()
        status_value = '100%' if self.checkboxes[row].isChecked() else '0%'
        self.table.setItem(row, 1, QTableWidgetItem(status_value))
        self.update_status_color(self.table.item(row, 1))
        self.update_status_background(self.table.item(row, 1))

    def add_row(self):
        current_row_count = self.table.rowCount()
        self.table.setRowCount(current_row_count + 1)
        self.table.setItem(current_row_count, 1, QTableWidgetItem(''))
        
        checkbox = QCheckBox()
        checkbox.stateChanged.connect(self.update_status_value)
        
        self.checkboxes.append(checkbox)
        self.table.setCellWidget(current_row_count, 0, checkbox)

    def delete_row(self):
        current_row_count = self.table.rowCount()
        if current_row_count > 0:
            self.checkboxes.pop()  
            self.table.removeRow(current_row_count - 1)

if __name__ == '__main__':
    app = QApplication(sys.argv)
    planner = PlannerApp()
    sys.exit(app.exec_())