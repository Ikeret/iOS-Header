//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSMutableArray, TSULocale;

__attribute__((visibility("hidden")))
@interface TSUDateParserLibrary : NSObject
{
    TSULocale *mLocale;
    unsigned long long mMaxPermittedParsers;
    unsigned long long mNumberOfUses;
    unsigned long long mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

- (void).cxx_destruct;
- (void)prepareDateParserInBackground;
- (void)returnDateParser:(id)arg1;
- (id)checkoutDateParser;
- (id)initWithLocale:(id)arg1;

@end

