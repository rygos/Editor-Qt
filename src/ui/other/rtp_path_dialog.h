/*
 * This file is part of EasyRPG Editor.
 *
 * EasyRPG Editor is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG Editor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyRPG Editor. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DIALOGRTPPATH_H
#define DIALOGRTPPATH_H

#include <QDialog>

namespace Ui {
class RtpPathDialog;
}

class RtpPathDialog : public QDialog
{
	Q_OBJECT

public:
	explicit RtpPathDialog(QWidget *parent = nullptr);
	~RtpPathDialog();

private slots:
	void on_toolRtpPath_clicked();

	void on_ok();
private:
	Ui::RtpPathDialog *ui;
};

#endif // DIALOGRTPPATH_H
