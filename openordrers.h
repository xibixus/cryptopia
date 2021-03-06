#ifndef OPENORDRERS_H
#define OPENORDRERS_H

#include <QAbstractTableModel>
#include <QJsonArray>
#include <QJsonObject>
#include <QDebug>
#include <QDateTime>
#include <QIcon>

class OpenOrdrers : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit OpenOrdrers(QObject *parent = nullptr);
    const int COLUMN = 8;
    enum KeyColumn {OrderId = 0, TradePairId, Market, Type, Rate, Amount, Total, TimeStamp};
    enum TypeOrder {sell = 0, bay = 1};
    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    // Add data:
    bool insertRows(int row, int count, const QModelIndex &parent = QModelIndex()) override;
    bool insertColumns(int column, int count, const QModelIndex &parent = QModelIndex()) override;

    // Remove data:
    bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex()) override;
    bool removeColumns(int column, int count, const QModelIndex &parent = QModelIndex()) override;
    void clearOpenOrders();
    void setNewOpenOrders(QJsonArray array);
    void parsing(QJsonArray array);
    void applyChanges();
    void setNotifi(double price, double amount, int id);
    QVector <int> getOpenOrders();
    void handler();
    void notifyOrders();
    QList<double> getOpenOrdersId(int price);




    struct MyOrder {
        int orderId;
        int TradePairId;
        QString market;
        QString type;
        double rate;
        double amount;
        double total;
        double remaining;
        QString timestamp;
    };
    QList<MyOrder> myOrders;
    QMap<qint64, MyOrder> stackNotifi;

//    void selectRow();
signals:
    void sendNotifi(double price, double amount, int pairId, int ordId);
    void sendNotifyOrders(QVector<double> openOrders);
private:
};

#endif // OPENORDRERS_H
