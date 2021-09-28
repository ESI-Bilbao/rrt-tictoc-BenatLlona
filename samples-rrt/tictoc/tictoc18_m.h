//
// Generated file, do not edit! Created by nedtool 5.6 from tictoc18.msg.
//

#ifndef __TICTOC18_M_H
#define __TICTOC18_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>tictoc18.msg:16</tt> by nedtool.
 * <pre>
 * //
 * // Same as TictocMsg11
 * //
 * message TicTocMsg18
 * {
 *     int source;
 *     int destination;
 *     int hopCount = 0;
 * }
 * </pre>
 */
class TicTocMsg18 : public ::omnetpp::cMessage
{
  protected:
    int source;
    int destination;
    int hopCount;

  private:
    void copy(const TicTocMsg18& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TicTocMsg18&);

  public:
    TicTocMsg18(const char *name=nullptr, short kind=0);
    TicTocMsg18(const TicTocMsg18& other);
    virtual ~TicTocMsg18();
    TicTocMsg18& operator=(const TicTocMsg18& other);
    virtual TicTocMsg18 *dup() const override {return new TicTocMsg18(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getSource() const;
    virtual void setSource(int source);
    virtual int getDestination() const;
    virtual void setDestination(int destination);
    virtual int getHopCount() const;
    virtual void setHopCount(int hopCount);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TicTocMsg18& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TicTocMsg18& obj) {obj.parsimUnpack(b);}


#endif // ifndef __TICTOC18_M_H

