//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDDrawableInfo.h>

#import <TSDrawables/TSSStyleClient-Protocol.h>

@class NSString, TSDReflection, TSDShadow, TSDStroke, TSSStyle;

@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient>
{
}

- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (id)styleIdentifierTemplateForNewPreset;
- (id)propertyMapForNewPreset;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)i_setValue:(id)arg1 forProperty:(int)arg2;
- (void)setValuesForProperties:(id)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (id)objectForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
@property(copy, nonatomic) TSDShadow *shadow;
@property(copy, nonatomic) TSDReflection *reflection;
@property(nonatomic) float opacity;
@property(copy, nonatomic) TSDStroke *stroke;
@property(readonly, nonatomic) _Bool supportsStyleInspecting;
@property(readonly, nonatomic) _Bool pathIsOpen;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2 tailLineEndInfo:(int)arg3;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;
- (id)stylesForCopyStyle;
- (unsigned short)stylePropertyId;
- (id)stylePropertyName;
@property(retain, nonatomic) TSSStyle *style;
- (Class)styleClass;
- (_Bool)isSelectable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

