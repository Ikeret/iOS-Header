//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MKExpandingLabel, NSArray, TransitSignCell;

@protocol TransitSignCellDelegate <NSObject>
- (void)transitSignCell:(TransitSignCell *)arg1 incidentButtonTappedForIncidents:(NSArray *)arg2;
- (void)transitSignCellDidTapClusteredRoutesButton:(TransitSignCell *)arg1;
- (void)transitSignCell:(TransitSignCell *)arg1 didExpandLabel:(MKExpandingLabel *)arg2;
@end

