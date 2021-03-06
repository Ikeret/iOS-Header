//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/TSTCellIterating-Protocol.h>
#import <TSTables/TSTCellRegionIterating-Protocol.h>
#import <TSTables/TSTMutableCellIteratorDataUpdating-Protocol.h>

@class NSString, TSTCell, TSTCellRegion, TSTTableDataStore, TSTTableInfo, TSTTableModel, TSTTableTile, TSTTableTileRowInfo;
@protocol TSTCellRegionIterating;

@interface TSTDataStoreIterator : NSObject <TSTCellIterating, TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>
{
    _Bool _rightToLeft;
    _Bool _terminated;
    unsigned int _curRowIndex;
    TSTTableModel *_tableModel;
    TSTTableDataStore *_dataStore;
    TSTCellRegion *_region;
    NSObject<TSTCellRegionIterating> *_regionIterator;
    unsigned long long _searchMask;
    struct TSUCellCoord _curCellID;
    TSTTableTile *_curTile;
    TSTTableTileRowInfo *_curRow;
    TSTCell *_cell;
    struct _NSRange _curTileRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool terminated; // @synthesize terminated=_terminated;
@property(nonatomic) _Bool rightToLeft; // @synthesize rightToLeft=_rightToLeft;
@property(readonly, nonatomic) TSTCell *cell; // @synthesize cell=_cell;
@property(nonatomic) unsigned int curRowIndex; // @synthesize curRowIndex=_curRowIndex;
@property(retain, nonatomic) TSTTableTileRowInfo *curRow; // @synthesize curRow=_curRow;
@property(nonatomic) struct _NSRange curTileRange; // @synthesize curTileRange=_curTileRange;
@property(retain, nonatomic) TSTTableTile *curTile; // @synthesize curTile=_curTile;
@property(nonatomic) struct TSUCellCoord curCellID; // @synthesize curCellID=_curCellID;
@property(nonatomic) unsigned long long searchMask; // @synthesize searchMask=_searchMask;
@property(readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator; // @synthesize regionIterator=_regionIterator;
@property(readonly, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property(readonly, nonatomic) TSTTableDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(readonly, nonatomic) TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
- (void)terminate;
- (_Bool)getNextCellData:(id *)arg1;
- (id)nextCellData;
- (void)iterateCellsUsingBlock:(CDUnknownBlockType)arg1;
- (struct TSUCellCoord)advanceToCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)getNext;
- (void)updateFormulaForCellData:(id)arg1;
- (void)updateCellData:(id)arg1;
- (void)p_setupTileAndRowAtCellID:(struct TSUCellCoord)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchMask:(unsigned long long)arg4;
- (id)initWithInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchMask:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TSTTableInfo *tableInfo;

@end

