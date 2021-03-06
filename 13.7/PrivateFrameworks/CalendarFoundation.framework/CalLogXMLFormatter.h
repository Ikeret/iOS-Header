//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalLogFormatter-Protocol.h>

@class NSString;

@interface CalLogXMLFormatter : NSObject <CalLogFormatter>
{
    _Bool _shouldPrettyPrint;
    _Bool _useTinyElementNames;
}

@property(nonatomic) _Bool useTinyElementNames; // @synthesize useTinyElementNames=_useTinyElementNames;
@property(nonatomic) _Bool shouldPrettyPrint; // @synthesize shouldPrettyPrint=_shouldPrettyPrint;
- (id)newFormattedString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

