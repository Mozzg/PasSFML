{$IFDEF FPC}
  {$MODE Delphi}
  {$PACKRECORDS C}
  {$DEFINE RecordOperators}
  {$DEFINE RecordConstructors}
{$ELSE}
  {$IFDEF VER170}
    {$DEFINE RecordOperators}
  {$ENDIF}

  {$IFDEF VER180}
    {$DEFINE RecordOperators}
  {$ENDIF}

  {$IFDEF VER190}
    {$DEFINE RecordOperators}
  {$ENDIF VER190}

  {$IFDEF VER200}
    {$DEFINE RecordOperators}
  {$ENDIF VER200}

  {$IFDEF VER210}
    {$DEFINE RecordOperators}
  {$ENDIF VER210}

  {$IFDEF VER220}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER220}

  {$IFDEF VER230}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER230}

  {$IFDEF VER240}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER240}

  {$IFDEF VER250}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER250}

  {$IFDEF VER260}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER260}

  {$IFDEF VER270}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER270}

  {$IFDEF VER280}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER280}

  {$IFDEF VER290}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER290}

  {$IFDEF VER300}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER300}

  {$IFDEF VER310}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER310}

  {$IFDEF VER320}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER320}

  {$IFDEF VER330}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER330}

  {$IFDEF VER340}
    {$DEFINE RecordOperators}
    {$DEFINE RecordConstructors}
  {$ENDIF VER340}
{$ENDIF}

{-$DEFINE DynLink}

{-$UNDEF RecordConstructors}
{-$UNDEF RecordOperators}

{$Z4}
{$A4}

{$IFNDEF FPC}
  {$DEFINE INT64RETURNWORKAROUND}
{$ENDIF}

{$IFDEF FPC}
  {$IFDEF UNIX}
    {$IFDEF CPUARM}
      {$DEFINE RASPBERRYVECTORWORKAROUND}
    {$ENDIF}
  {$ENDIF}
{$ENDIF}

{$IFDEF INT64RETURNWORKAROUND}
  {$DEFINE IMPLEMENTWORKAROUNDS}
{$ENDIF}
{$IFDEF RASPBERRYVECTORWORKAROUND}
  {$DEFINE IMPLEMENTWORKAROUNDS}
{$ENDIF}
