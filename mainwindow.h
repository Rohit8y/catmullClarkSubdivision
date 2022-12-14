#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFileDialog>
#include <QMainWindow>

#include "mesh/mesh.h"
#include "subdivision/subdivider.h"
#include "subdivision/limitprojectionsubdivider.h"


namespace Ui {
class MainWindow;
}

/**
 * @brief The MainWindow class represents the main window.
 */
class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow() override;

 private slots:
  void on_LoadOBJ_pressed();
  void on_MeshPresetComboBox_currentTextChanged(const QString &meshName);
  void on_SubdivSteps_valueChanged(int subdivLevel);
  void on_TessellationCheckBox_toggled(bool checked);

  void on_HideMeshCheckBox_toggled(bool checked);

  void on_outerTessLevel_valueChanged(int arg1);

  void on_spinBox_2_valueChanged(int arg1);

  void on_tessTypecomboBox_currentTextChanged(const QString &arg1);

  void on_outerTessLevel0_valueChanged(int arg1);

  void on_outerTessLevel1_valueChanged(int arg1);

  void on_outerTessLevel2_valueChanged(int arg1);

  void on_outerTessLevel3_valueChanged(int arg1);

  void on_innerTessLevel0_valueChanged(int arg1);

  void on_innerTessLevel1_valueChanged(int arg1);

  void on_limitProjectioncheckBox_toggled(bool checked);

private:
  void importOBJ(const QString &fileName);

  Ui::MainWindow *ui;
  Subdivider *subdivider;
  QVector<Mesh> meshes;
  Mesh limitProjectionMesh;
};

#endif  // MAINWINDOW_H
