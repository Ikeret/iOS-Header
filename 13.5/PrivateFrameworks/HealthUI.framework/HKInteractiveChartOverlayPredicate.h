//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;

@interface HKInteractiveChartOverlayPredicate : NSObject
{
    NSPredicate *_predicate;
    NSString *_localizedNameKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedNameKey; // @synthesize localizedNameKey=_localizedNameKey;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (id)initWithPredicate:(id)arg1 name:(id)arg2;

@end

