//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneCommand-Protocol.h>

@class NSString;

@interface SCWatchlistReplaceSymbolCommand : NSObject <SCKZoneCommand>
{
    NSString *_oldSymbol;
    NSString *_replacementSymbol;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *replacementSymbol; // @synthesize replacementSymbol=_replacementSymbol;
@property(readonly, copy, nonatomic) NSString *oldSymbol; // @synthesize oldSymbol=_oldSymbol;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithOldSymbol:(id)arg1 replacementSymbol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

