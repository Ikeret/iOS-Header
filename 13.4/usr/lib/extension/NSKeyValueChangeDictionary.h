//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface NSKeyValueChangeDictionary : NSDictionary
{
    CDStruct_e173081d _details;
    NSObject *_originalObservable;
    _Bool _isPriorNotification;
    _Bool _isRetainingObjects;
}

- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)retainObjects;
- (void)setOriginalObservable:(id)arg1;
- (void)setDetailsNoCopy:(CDStruct_e173081d)arg1 originalObservable:(id)arg2;
- (id)initWithDetailsNoCopy:(CDStruct_e173081d)arg1 originalObservable:(id)arg2 isPriorNotification:(_Bool)arg3;

@end

