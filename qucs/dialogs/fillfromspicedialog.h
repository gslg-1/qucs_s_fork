#ifndef FILLFROMSPICEDIALOG_H
#define FILLFROMSPICEDIALOG_H

#include <QDialog>

class Component;
class Schematic;
class QPushButton;
class QPlainTextEdit;
class QCheckBox;

class fillFromSpiceDialog : public QDialog {
  Q_OBJECT

private:

  Component *Comp;
  QMap<QString,QString> parsedProps;
  QString ModelName;
  QString ModelType;

  enum errorCode { noError = 0, noModel = 1, wrongModel = 2 };

  QPlainTextEdit *edtModel;
  QPushButton *btnOK, *btnCancel;
  QCheckBox *chbNumNotation;

  int parseModelcard();
  void fillCompProps();

private slots:
  void slotOK();

public:
  fillFromSpiceDialog(Component *pc, QWidget *w = nullptr);
};

#endif // FILLFROMSPICEDIALOG_H
