//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface ASFriendListSection : NSObject
{
    NSDate *_startDate;
    NSArray *_rows;
}

@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *endDate;
- (_Bool)containsFriendListRow:(id)arg1;
- (id)initWithDate:(id)arg1 andRows:(id)arg2;

@end

