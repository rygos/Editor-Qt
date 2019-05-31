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

#ifndef ITEMMANAGEMENT_H
#define ITEMMANAGEMENT_H

#include <QDialog>
#include <rpg_eventcommand.h>

namespace Ui {
class ChangeItemWidget;
}

class ChangeItemWidget : public QDialog
{
	Q_OBJECT

public:
	explicit ChangeItemWidget(QWidget *parent, RPG::EventCommand &cmd);
	~ChangeItemWidget();

private slots:
	void on_ChangeItemWidget_accepted();

private:
	Ui::ChangeItemWidget *ui;
	RPG::EventCommand &cmd;
};

#endif // ITEMMANAGEMENT_H
