#ifndef EDITREMOTEDIALOG_H
#define EDITREMOTEDIALOG_H

#include <QDialog>

class BasicMainWindow;

namespace Ui {
class EditRemoteDialog;
}

class EditRemoteDialog : public QDialog {
	Q_OBJECT
public:
	enum Operation {
		RemoteAdd,
		RemoteSet,
	};
private:
	Ui::EditRemoteDialog *ui;
	BasicMainWindow *mainwindow();
public:
	explicit EditRemoteDialog(BasicMainWindow *parent, Operation op);
	~EditRemoteDialog() override;

	void setName(QString const &s) const;
	void setUrl(QString const &s) const;

	QString name() const;
	QString url() const;
	int exec() override;
private slots:
	void on_pushButton_test_clicked();
};

#endif // EDITREMOTEDIALOG_H
