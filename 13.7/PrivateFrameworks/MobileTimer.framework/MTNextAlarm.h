//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface MTNextAlarm : NSObject
{
    _Bool _isSleepAlarm;
    NSString *_title;
    NSDate *_fireDate;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSleepAlarm; // @synthesize isSleepAlarm=_isSleepAlarm;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
@property(readonly, copy, nonatomic) NSURL *clockAppSectionURL;

@end

